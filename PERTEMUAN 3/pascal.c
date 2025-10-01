#include <stdio.h>

int main() {
    int n;
    printf("Masukkan jumlah baris segitiga Pascal: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int nilai = 1;
        // spasi untuk rata tengah
        for (int spasi = 0; spasi < n - i - 1; spasi++) {
            printf("  ");
        }
        // cetak angka Pascal
        for (int j = 0; j <= i; j++) {
            printf("%4d", nilai);
            nilai = nilai * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
