#include<stdio.h>

int main(){
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if(A > B){
        if (A > C){
            if (B > C){
                printf("%d ", A);
                printf("%d ", B);
                printf("%d", C);
            } else {
                printf("%d ", A);
                printf("%d ", C);
                printf("%d", B);
            }
        } else {
            printf("%d ", C);
            printf("%d ", A);
            printf("%d", B);
        }
    }  else {
        if (B > C){
            if (A > C){
                printf("%d ", B);
                printf("%d ", A);
                printf("%d", C);
            } else {
                printf("%d ", B);
                printf("%d ", C);
                printf("%d", A);
            }
        } else {
            printf("%d ", C);
            printf("%d ", B);
            printf("%d", A);
        }
    }
}
