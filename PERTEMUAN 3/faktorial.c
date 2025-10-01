#include <stdio.h>

int main() {
    int n;
    printf("Masukkan bilangan bulat: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Faktorial tidak terdefinisi untuk bilangan negatif.\n");
        return 0;
    }

    unsigned long long faktorial = 1;
    for (int i = 1; i <= n; i++) {
        faktorial *= i;
    }

    // Hitung jumlah digit
    unsigned long long temp = faktorial;
    int jumlahDigit = 0;
    if (temp == 0) jumlahDigit = 1;
    else {
        while (temp > 0) {
            temp /= 10;
            jumlahDigit++;
        }
    }

    printf("Faktorial dari %d = %llu\n", n, faktorial);
    printf("Jumlah digit = %d\n", jumlahDigit);

    return 0;
}
