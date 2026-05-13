#include <stdio.h>
#include <unistd.h>

int main(){

  for(int i = 10; i >= 0; i--){
      sleep(1);
      printf("Starting in: %d\n", i);
  }
return 0;
}
