#include <stdio.h>
#include <stdbool.h>


int main(){
  // Different variables types 
  int age = 19;             
  int year = 2026; 
  float degree = 9.0;    
  float usd_brl = 4.8926;
  double pi = 3.14159265358;
  char grade = 'A';
  char symbol = '&';
  char name[] = "Miguel";
  bool isOnline = true;
  

  // Print statements 
  printf("I am %d!\n", age); 
  printf("The year is %d!\n", year); 
  printf("My degree is %f for physics.\n", degree); 
  printf("The USD/BRL is %f for 11/05/2026.\n", usd_brl); 
  printf("The value o pi is %.2lf\n", pi); 
  printf("Your grade is%c.\n", grade);
  printf("My favorite symbol is %c\n", symbol);
  printf("My name is %s.\n", name);
  



  return 0;
}
