#include <stdio.h>

int square(int num){
  int result = num * num;

    return result;
}


int main(){
  int x = square(2);
  int y = square(3);
  int z = square(4);
  
  printf("x: %d\ny: %d\nz: %d\n", x, y, z);

  return 0;
}
