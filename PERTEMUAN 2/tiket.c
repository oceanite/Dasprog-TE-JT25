#include <stdio.h>
#include <string.h>

int main() {
    int umur;
    char hari[7];

    printf("Masukkan umur Anda: ");
    scanf("%d", &umur);
    printf("Masukkan hari dalam seminggu (misal: Senin, Selasa, dst.): ");
    scanf("%s", hari);

    if (strcmp(hari, "Rabu") == 0 || strcmp(hari, "rabu") == 0) {

        if (umur >= 60){
            printf("harga tiket : Rp12.500");
            
        } else if (umur >= 12){
            printf("harga tiket : Rp25.000");
            
        } else if (umur < 12){
            printf("harga tiket : Rp15.000");
        }
        
    } else{
        if (umur >= 60){
            printf("harga tiket : Rp25.000");
            
        } else if (umur >= 12){
            printf("harga tiket : Rp50.000");
            
        } else if (umur < 12){
            printf("harga tiket : Rp30.000");
        }
}
}