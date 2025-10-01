#include<stdio.h>
#include<string.h>

int main(){
    char str1[100], str2[100];
    printf("Masukkan string pertama: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Masukkan string kedua: ");
    fgets(str2, sizeof(str2), stdin);

    // Menghapus newline character jika ada
    //str1[strcspn(str1, "\n")] = 0;
    //str2[strcspn(str2, "\n")] = 0;

    // Menyalin str1 ke str3
    char str3[200];
    //strcpy(str3, str1);
    memcpy(str3, str1, strlen(str1) + 1); // +1 untuk null terminator
    printf("Setelah strcpy, str3: %s\n", str3);
    printf("panjang str3: %d", strlen(str3));
/*
    // Menggabungkan str1 dan str2 ke str3
    strcat(str3, " ");
    strcat(str3, str2);
    printf("Setelah strcat, str3: %s\n", str3);

    // Membandingkan str1 dan str2
    int cmp = strcmp(str1, str2);
    if(cmp == 0) {
        printf("str1 dan str2 adalah sama.\n");
    } else if(cmp < 0) {
        printf("str1 lebih kecil dari str2.\n");
    } else {
        printf("str1 lebih besar dari str2.\n");
    }
*/
    return 0;
}