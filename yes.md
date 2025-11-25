1. Lakukan subnetting pada topologi menggunakan metode VLSM.
   | Nama Subnet | Kebutuhan host | Prefix | Network | Netmask | Usable IPs | First usable | Last usable | Broadcast | Gateway |
   |-------------|----------------|--------|---------|---------|------------|--------------|-------------|-----------|-----------------|
   | Student-Zone | 300 | /23 | 172.20.0.0/23 | 255.255.254.0 | 510 | 172.20.0.1 | 172.20.1.254 | 172.20.1.255 | 172.20.0.1 |
   | Faculty-Lab | 150 | /24 | 172.20.2.0/24 | 255.255.255.0 | 254 | 172.20.2.1 | 172.20.2.254 | 172.20.2.255 | 172.20.2.1 |
   | Web-Cluster | 25 | /27 | 172.20.3.0/27 | 255.255.255.224 | 30 | 172.20.3.1 | 172.20.3.30 | 172.20.3.31 | 172.20.3.1 |
   | DB-Cluster | 10 | /28 | 172.20.3.32/28 | 255.255.255.240 | 14 | 172.20.3.33 | 172.20.3.46 | 172.20.3.47 | 172.20.3.33 |
   | Link R-GW ↔ R-Campus | 2 | /30 | 172.20.3.48/30 | 255.255.255.252 | 2 | 172.20.3.49 | 172.20.3.50 | 172.20.3.51 | 172.20.3.49 |
   | Link R-GW ↔ R-Service | 2 | /30 | 172.20.3.52/30 | 255.255.255.252 | 2 | 172.20.3.53 | 172.20.3.54 | 172.20.3.55 | 172.20.3.53 |
2. Lakukan Dynamic Routing pada topologi tersebut. Pastikan seluruh node yang ada dapat mengakses internet.

```
#R-Gateway
network 172.20.3.48/30
network 172.20.3.52/30
default-information originate

#R-Campus
network 172.20.3.48/30
network 172.20.2.0/24
network 172.20.0.0/23

#R-Service
network 172.20.3.52/30
network 172.20.3.0/27
network 172.20.3.32/28
```

3. Buat aturan firewall pada R-Gateway untuk memblokir semua koneksi SSH menuju R-Service pada hari Sabtu dan Minggu.

```
#R-Gateway
iptables -A FORWARD -p tcp --dport 22 -d 172.20.3.0/27 -m time --weekdays Sat,Sun -j DROP
iptables -A FORWARD -p tcp --dport 22 -d 172.20.3.32/28 -m time --weekdays Sat,Sun -j DROP
```

4. Implementasikan firewall pada DB Cluster agar hanya bisa diakses oleh Web-Cluster melalui port 3306.

```
#DB-Cluster
iptables -A INPUT -s 172.20.3.0/27 -p tcp --dport 3306 -j ACCEPT
iptables -A INPUT -p tcp --dport 3306 -j DROP
```
