# include <iostream>

int main()
{
  
  // && = and operator
  // || = or operator
  // ! = negation operator
  using namespace std; 
  int temp;
  bool sunny = true; 

  cout << "Enter temperature: ";
  cin >> temp;

  if(temp <= 0 || temp >= 30){
    cout << "The temperature is bad\n";
  }
  else{
    cout << "The tempereature is good\n";
  }
 
  if(!sunny){
    cout << "It is sunny outside\n";
  }
  else{
    cout << "It is cloudy outside\n";
  }
}
