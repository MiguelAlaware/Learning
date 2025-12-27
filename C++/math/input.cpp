#include <iostream>

int main(){
  std::string name;
  int age;
  
  std::cout << "What's your full name?: "; // << it's the insertion operator
  std::getline(std::cin >> std::ws, name); // >> it's the extraction operator
  // getline() for strings with spaces
  
  std::cout << "How old are you?: ";
  std::cin >> age;


  std::cout << "Hello " << name << std::endl;
  std::cout << "You are " << age << " years old" << std::endl;
 
  return 0;

}
