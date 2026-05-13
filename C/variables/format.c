#include <stdio.h>


int main(){

  // Format: (width precision flags)
  int x = 1;
  int y = 10;
  int z = -100;
 
  printf("%03d\n", x);
  printf("%3d\n",y);
  printf("%-3d\n", z);
 
  float v = 19.99;
  float w = 20.99;
  float u = 39.99;

  printf("%3.1f\n", v);
  printf("%3.1f\n", w);
  printf("%3.1f\n", u);
 
  // Arithmetic operators
  int n1 = 2;
  int n2 = 3;
  int n3 = 0;

  //n3 = n1 + n2
  //n3 = n1 - n2
  //n3 = n1 * n2
  //n3 = n1 / n2
  //n3 = n1 % n2 (remainder operator)
  //n1-- and n1++(decrement & increment)
  //n1+=2, n1-=2, n1*=2.
  printf("The result is %d", n3);
 

 return 0;

}
