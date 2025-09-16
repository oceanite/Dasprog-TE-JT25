#include<stdio.h>

int main(){
  int a=8; int aa=4;
  double b=3.1;
  char c='A';

  //operator aritmatika
  printf("a + b = %.2f", a+b);
  printf("\na + c = %d", a+c);

  //operator penugasan
  printf("\nhasil a<<=2 : %d", a<<=2);
  printf("\nhasil a+=4 : %d", a+=4);

  //operator bitwise
  printf("\nhasil 10 & 12 : %d", (10&12));
  printf("\nhasil 10 ^ 12 : %d", (10^12));
}

