#include<stdio.h>

int main() {
    double fahrenheit, kelvin, reamur;
    double celcius;
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%lf", &celcius);

    // Konversi suhu
    fahrenheit = (celcius * 9/5) + 32;
    kelvin = celcius + 273.15;
    reamur = celcius * 4/5;

    // Menampilkan hasil konversi
    printf("Suhu dalam Fahrenheit: %.2lf\n", fahrenheit);
    printf("Suhu dalam Kelvin: %.2lf\n", kelvin);
    printf("Suhu dalam Reamur: %.2lf\n", reamur);
}