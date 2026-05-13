#include <stdio.h>

typedef int Number;
typedef char String[100];
typedef char Initials[3];

int main() {

  Number x = 3;
  Number y = 5;
  Number z = x + y;
  
  String name = "Miguel F.";
  
  Initials user1 = "MF";
  Initials user2 = "BR";

  return 0;
}
