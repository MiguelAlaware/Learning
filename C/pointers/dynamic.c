#include <stdio.h>
#include <stdlib.h>

int main(){
   

  int number = 0;
  printf("Enter the number of players: ");
  scanf("%d", &number);

  //int *scores =  malloc(number * sizeof(int));
    int *scores = calloc(number, sizeof(int)); //contigonous allocation

  if(scores == NULL){
    printf("Memory allocation failed\n");
    return 1;
  }

 for (int i = 0;i < number;i++) {
    printf("Enter a score #%d: ", i+1);
    scanf("%d", &scores[i]);
 }

 for (int i = 0;i < number;i++) {
    printf("%d ", scores[i]);
 }printf("\n");

 free(scores);
 scores = NULL;

 return 0;

}
