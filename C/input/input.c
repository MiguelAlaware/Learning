#include <stdio.h>
#include <string.h>


int main(){

  int age = 0;
  float grade = 0.0f;
  char graduation = '\0';
  char name[30] = "";
  
  printf("Enter your age: ");
  scanf("%d", &age);

  printf("Enter your grade: ");
  scanf("%f", &grade);
  
  printf("Enter your graduation: ");
  scanf(" %c", &graduation);
  
  getchar();
  printf("Enter your full name: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';

  printf("Your age is %d\n", age);
  printf("Your grade in %c is %.2f\n", graduation, grade);
  printf("Your full name is: %s\n", name);

  return 0;
}
