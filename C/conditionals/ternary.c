#include <stdio.h>

int main(){

  int x = 5;
  int y = 6;
  int max = (x > y) ? x : y; // (condition) ? value_if_true : value_if_false;

  printf("Max value: %d\n", max);

  return 0;
}
