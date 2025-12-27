#include <iostream>

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
 
 return 0;

}
