#include <stdio.h>

void birthday(int* age);

int main(){

 int age = 19;
 int *pAge = &age; 

 birthday(pAge);

 printf("You are %d years old\n");
 return 0;
}

void birthday(int* age){
  (*age)++; 
}
