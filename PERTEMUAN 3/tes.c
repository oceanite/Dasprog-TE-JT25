#include<stdio.h>

int fungsi1(){
    int a=5;
    int b=10;
    return a*b;
}

int main(){
    int i;
    /*
    for (i=0; i<5; i++){
        printf("Hello, World! %d\n",i); 
        if(i==3){
            //return 0;
        }
        printf("eksekusi lanjut\n");
    }
*/
    //printf("eksekusi lanjut\n");
    int hasil = fungsi1();
    printf("hasil fungsi1: %d\n", hasil);
    //return 0;

}