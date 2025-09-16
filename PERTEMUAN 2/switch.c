#include <stdio.h>

int main() {
    int angka = 3;

    switch (angka) {
        case 1:
            printf("Satu\n");
            break;
        case 2:
            printf("Dua\n");   
            break; 
        case 3:
            printf("Tiga\n");
            break;
        default:
            printf("Angka tidak dikenali\n");
    }
    return 0;
}   
