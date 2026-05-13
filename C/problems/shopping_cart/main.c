#include <stdio.h>
#include <string.h>
int main(){

  char item[50] = "";
  float price = 0.0f;
  char currency = '$';
  float total = 0.0f;
  int quantity = 0; 
  
  printf("What item would you like?: ");
  fgets(item, sizeof(item), stdin);
  item[strlen(item) - 1] = '\0';

  printf("What is the price of each item?: ");
  scanf("%f", &price);

  printf("How many would you like?: ");
  scanf("%d", &quantity);

  total = price * quantity;
  printf("The total price is %c%.2f\n", total, currency);
  return 0;
}
