#include<stdio.h>
#define MAX 50

int main(){
    char nama[50];
    char nama2[MAX];
    scanf("%[^\ns]",nama);
    //fgets(nama, MAX, stdin);
    printf("%s",nama);
}