#include <iostream>

namespace first {
    int z = 1;
}

namespace second {
    int z = 2;
}

int main() {

  /* --FIRST PART-- */
  // Integer (whole number)
  int x = 5;
  int y = 10;
  int sum = x + y;
  
  // Double (number including decimal)
  double price = 10.99;
  double score = 3.7;
  double temperature = 30.4;
  
  // Char (single character)
  char grade = 'A';
  char initial = 'M';
  char currency = '$';
  
  // Boolean (true or false)
  bool student = true;
  bool power = false;
  
  // String (objects that represent a sequence of text)
  std::string name = "Miguel";
  std::string food = "Pasta";
  std::string country = "Brazil";

  std::cout << "Hello " << name << '\n';
  std::cout << "My favorite food is " << food << std::endl;
  
  /* --SECOND PART-- */
  const double PI = 3.14159; // Makes a variable constant
  double radius = 10;
  double circuference = 2 * PI * radius;
  
  std::cout << circuference << "cm" << std::endl;
 
  /* --THIRD PART-- */
  using namespace second;
  using namespace std;

  cout << z;

  

  return 0;
}
