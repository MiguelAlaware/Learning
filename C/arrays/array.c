#include <stdio.h>

int main(){

  int numbers[4] = {0};
  int scores[5]; 
  char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
  char name[] = "Miguel";
 
  /*
    for(int i = 0; i < (  sizeof(numbers)/sizeof(numbers[0])) ; i++){
     printf("n%d is %d\n", i+1, numbers[i]);
  }
  */ 
  
  

  for(int i = 0; i < (sizeof(scores)/sizeof(scores[0])); i++){
   printf("Enter a score: "); 
   scanf("%d", &scores[i]);
  }
  for(int i = 0; i < (sizeof(scores)/sizeof(scores[0])); i++){
   printf("%d ", scores[i]); 
  }

  return 0;
}
