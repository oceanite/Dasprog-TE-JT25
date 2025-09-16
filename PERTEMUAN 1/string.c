#include<stdio.h>

int main() {
    char nama[50];
    printf("Masukkan nama: ");
    //scanf("%s", nama);
    gets(nama);
    printf("Nama: %s\n", nama);
}