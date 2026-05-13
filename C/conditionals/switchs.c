#include <stdio.h>

int main(){

  int dayOfWeek = 0;
  printf("Enter a day of the week [1, 7]: ");
  scanf("%d", &dayOfWeek);


  switch (dayOfWeek) {
    case 1:
    printf("It is monday\n");
    break;
    case 2:
    printf("Its is tuesday\n");
    break;
    case 3:
    printf("Its is wednessday\n");
    break;
    case 4:
    printf("Its is thurdays\n");
    break;
    case 5:
    printf("Its is friday\n");
    break;
    case 6:
    printf("Its is saturday\n");
    break;
    case 7:
    printf("Its is sunday\n");
    break;
    default:
    printf("Please only enter a number from 1 to 7!\n");

  return 0;
  }
}
