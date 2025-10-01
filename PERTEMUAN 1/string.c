#include<stdio.h>

int main() {
    char nama[50]="budi";
    char angka = '5';
    //printf("Masukkan nama: ");
    //scanf("%s", nama);
    //gets(nama);
    printf("Alamat nama: %p\n", ((void*)nama)+1);
    printf("Alamat angka: %p\n", (void*)&angka); 
}