#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;

    printf("Masukkan kalimat: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        char c = str[i];
        if (c=='a' || c=='A' || c=='i' || c=='I' || c=='u' || c=='U' || c=='e' || c=='E' || c=='o' || c=='O') {
            count++;
        }
    }

    printf("Jumlah huruf vokal: %d\n", count);
    return 0;
}
