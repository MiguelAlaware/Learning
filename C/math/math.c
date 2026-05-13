#include <stdio.h>
#include <math.h>

int main(){

  int x = 16;

  //x = sqrt(x);
  //x = pow(x, 2);
  //x = round(x);
  //x = ceil(x);
  //x = floor(x);
  //x = abs(x);
  //x = log(x);
  //x = sin(45), x = cos(60), x = tan(45);
  
  double radius = 0.0;
  double area = 0.0;
  double surfaceArea = 0.0; 
  double volume = 0.0;
  const double PI = 3.14159;
 
  // Area and volume calculator
  printf("Enter the radius: ");
  scanf("%lf", &radius);
  
  area = PI * pow(radius, 2);
  surfaceArea = 4 * PI * pow(radius, 2);
  volume = (4/3) * PI * pow(radius, 3);
 
  printf("Volume: %.2lf m3\n", floor(volume));
  printf("surfaceArea: %.2lf m2\n", floor(surfaceArea));
  printf("Area: %.2lf m2\n", floor(area));
  

  //Compound interest calculator
  double principal = 0.0;
  double rate = 0.0;
  int years = 0;
  int timesCompounded = 0;
  double total = 0.0;

  printf("Enter the principal: ");
  scanf("%lf", &principal);

  printf("Enter the interest rate: ");
  scanf("%lf", &rate);
  rate = rate / 100;

  printf("Enter the numbers of years: ");
  scanf("%d", &years);

  printf("Enter the numbers of times compounded per year: ");
  scanf("%d", &timesCompounded);

  total = principal * pow(1 + rate/timesCompounded, timesCompounded*years);
 

  printf("After %d years, the total will be $%.2lf\n", years, total);
  return 0;
}
