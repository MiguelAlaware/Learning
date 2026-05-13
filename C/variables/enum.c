#include <stdio.h>

typedef enum {
  SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESSDAY = 4, THURSDAY = 5, FRIDAY = 6, SATURDAY = 7
}Day;

int main() {
   Day today = SUNDAY;
   printf("%d\n", today);
   return 0;
   if(today == SUNDAY || today == SATURDAY){
    printf("We are in weekend\n");
  }else{
    printf("We are in weekday\n");
  } 
  return 0;
}
