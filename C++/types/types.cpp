#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
// Creates an alias for another data type

//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;
// 'using' works better with templates? Better readability

int main(){

   pairlist_t pairlist;
   text_t firstName = "Miguel";
   number_t age = 18;
  
   std::cout << firstName << std::endl;
   std::cout << age << std::endl;
   return 0;
}
