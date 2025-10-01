#include<stdio.h>
#include<string.h>

int main() {
    char str1[100], str2[100];

    printf("Masukkan string pertama: ");
    fgets(str1, sizeof(str1), stdin);
    //str1[strcspn(str1, "\n")] = 0; // Menghapus newline jika ada

    printf("Masukkan string kedua: ");
    fgets(str2, sizeof(str2), stdin);
    //str2[strcspn(str2, "\n")] = 0; // Menghapus newline

    printf("%d\n",strcmp(str1,str2));
    if((strcmp(str1,str2)) < 0){
        printf("Benar\n");
    } else{
        printf("Beda\n");
    }
}