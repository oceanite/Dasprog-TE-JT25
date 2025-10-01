#include <stdio.h>
#include <string.h>

int main() {
    char names[5][20];
    char result[200] = "";

    printf("Masukkan 5 nama:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%s", names[i]);
    }

    for (int i = 0; i < 5; i++) {
        strcat(result, names[i]);
        if (i < 4) strcat(result, " ");
    }

    printf("Gabungan nama: %s\n", result);
    return 0;
}
