#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
  int age = 0;
  printf("Enter your age: ");
  scanf("%d", &age);

  if(age >= 60){
  printf("You are an senior!\n");
  }
  else if (age >= 18) {
  printf("You are an adult!\n");
  }
  else if(age < 0){
  printf("You havent even been born yet!\n");
  }
  else if(age == 0){
  printf("You are a newborn\n");
  }
  else{
  printf("You are a child\n");
  }

  bool isStudent = true;
  
  if (isStudent) {
    printf("You are a student!\n");
  }
  else{
    printf("You are NOT a student!\n");
  }
  
  getchar();
  char name[50] = "";
 
  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';

  if(strlen(name) == 0){
    printf("You did not enter your name\n");
  }
  else{
    printf("Hello %s\n", name);
  }

 return 0;
}
