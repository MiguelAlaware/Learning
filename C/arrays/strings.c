#include <stdio.h>
#include <string.h>

int main(){

  char fruits[][10] = {"Apple", "Banana", "Coconout"};
  char names[3][25] = {0};
  int size = (sizeof(fruits)/sizeof(fruits[0]));


  for(int i = 0; i < size; i++){
    printf("%s\n", fruits[i]);
    printf("Enter your name: ");
    fgets(names[i], sizeof(names[i]), stdin);
    names[i][strlen(names[i]) - 1] = '\0';
  }

  for(int i = 0; i < size; i++){
    printf("%s\n", names[i]);
  }

  return 0;
}
