#include <iostream>
#include <cmath>

int main(){
  
  // Arithmetic Operations
  int students = 20;
  students+=4; // Addition
  students*=2; // Subtraction
  students/=7;// Division
 
  int remainder = students % 3;
  std::cout << students << std::endl;
  std::cout << remainder << std::endl;
 
 // Type Conversion
 double x = (int) 3.14; //Explicit conversion
 
 char y = 100;
 
 std::cout << x << std::endl;
 std::cout << y << std::endl;

 int correct = 9;
 int questions = 10;
 double score = correct/(double)questions * 100;

 std::cout << score << "%" << std::endl;

 double a = 3;
 double b = 4;
 double c = 3.14;
 double d = -10;
 double z;

 z = std::max(a, b);
  
 std::cout << "max number between " << a << " and " << b << " is: "<< z << std::endl;
 

 z = std::min(a, b);
 std::cout << "min number between " << a << " and " << b << " is: "<< z << std::endl;

 z = pow(a, b);
 std::cout << a << " to the power of " << b << " is " << z << std::endl;
 
 z = sqrt(b);
 std::cout << "The square root of " << b << " is " << z << std::endl;
 
 z = abs(d);
 std::cout << "The absolute value of " << d << " is " << d << std::endl;
 
 z = round(c); // ceil(c) for round up and floor(c) to round down.
 std::cout << c << " roudend is equal to " << z << std::endl;

 return 0;

}
