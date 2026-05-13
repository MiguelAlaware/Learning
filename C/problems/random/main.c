#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  srand(time(NULL));
  int min = 0;
  int max = 100;
  int randomNum = (rand() % max) + min;


  printf("random int: %d\n", randomNum);

  return 0;
}
