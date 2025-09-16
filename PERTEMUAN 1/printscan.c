#include<stdio.h>

int main() {
    char nama[50];
    int usia;
    char nilai;
    //printf("Masukkan nama: ");
    scanf("%s", nama);
    //printf("Masukkan nilai: ");
    scanf(" %c", &nilai);
    //printf("Masukkan usia: ");
    scanf("%d", &usia);
    printf("Nama: %s, Usia: %d, Nilai: %c.\n", nama, usia, nilai);
}


