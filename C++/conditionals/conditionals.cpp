#include <iostream>

int main()
{
 using namespace std; 
 int age;


 // Using if statements
 cout << "Enter your age: ";
 cin >> age;
 
 if(age >= 100){
  cout << "You're too old to enter this site!" << endl;
  }
 else if(age < 0){
    cout << "You haven't even been born yet!" << endl;
  }
 else if(age >= 18){
    cout << "Welcome to the site!" << endl;
  }
 else{
    cout << "You're not old enough to enter!" << endl;
  }

 // Using switch statements (used when multiple "else if" are necessary)
 int month;
 cout << "enter the month (1-12): ";
 cin >> month;

 switch(month){
   case 1:
    cout << "It is Januar" << endl;
    break;
   case 2:
    cout << "It is Februar" << endl;
    break;
   case 3:
    cout << "It is März" << endl;
    break;
   case 4:
    cout << "It is April" << endl;
    break;
   case 5:
    cout << "It is Mai" << endl;
    break;
   case 6:
    cout << "It is Juni" << endl;
    break;
   case 7:
    cout << "It is Juli" << endl;
    break;
   case 8:
    cout << "It is August" << endl;
    break;
   case 9:
    cout << "It is September" << endl;
    break;
   case 10:
    cout << "It is Oktober" << endl;
    break;
   case 11:
    cout << "It is November" << endl;
    break;
   case 12:
    cout << "It is Dezember" << endl;
    break;
   default:
    cout << "Enter only numbers (1-12)" << endl;
  }

 // Ternary operator for simplicity over the if/else statements.
 int grade = 28;

 (grade >= 60) ? cout << "You pass!" << endl : cout << "You fail!" << endl;



 return 0;

}
