# include <iostream>

int main()
{
  using namespace std;
  string name;

  cout << "Enter your name: ";
  getline(cin, name);

 
  if(name.empty()){
    cout << "You didn't put your name\n";
  }
  else if(name.length() > 12){
    cout << "Your name is over 12 characters\n";
  }
  else{
    cout << "Welcome " << name << endl;
  }

  name.append("@hotmail.com");
  cout << "Your username is now " << name << endl;

  cout << "Your initial is " << name.at(0) << endl;

  name.insert(0, "@");
  cout << name << endl;

  cout << "Space on index " << name.find(' ') << endl;

  name.erase(0,1);
  cout << "Correct name is " << name << endl;
 
  name.clear();
  cout << "Hello " << name << endl;
  return 0;
}
