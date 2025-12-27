# include <iostream>

int main()
{
  using namespace std;
  char op;
  double num1;
  double num2;
  double result;
  
  cout << "-=-=-=-=- CALCULATOR -=-=-=-=-\n";
  
  cout << "Enter (+ - * /): ";
  cin >> op;

  cout << "Enter first number: ";
  cin >> num1;

  cout << "Enter second number: ";
  cin >> num2;

  cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
  
  switch (op) {
    default:
      cout << "Input must be one of the given operators";
      break; 
    case '+':
      result = num1 + num2;
      cout << "The result is equal to " << result << endl;
      break;
    case '-':
      result = num1 - num2;
      cout << "The result is equal to " << result << endl;
      break;
    case '*':
      result = num1 * num2;
      cout << "The result is equal to " << result << endl;
      break;
    case '/':
      result = num1 / num2;
      cout << "The result is equal to " << result << endl;
      break;
  }
  return 0;
}
