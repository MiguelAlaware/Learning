#include <stdio.h>

void hello(char name[], int age); //function prototype
bool ageCheck(int age);

void hello(char name[], int age){
  printf("Hello %s\n", name);
  printf("You are %d years old\n", age);
}


int sum(int x, int y){
  int result = x + y;
  return result;
}

int main(){

  int result =  sum(3, 5);

  printf("My result is %d\n", result);

  hello("Miguel", 19);

  if(ageCheck(30)){
    printf("You are old enough to work over here!\n");

  }
  else {
    printf("You are not old enough to work here.\n");
  }
  return 0;
}

bool ageCheck(int age){
  return age >= 18;
}
