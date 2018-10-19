// Include statements
#include <iostream>
using namespace std;

// Main function
int main ()
{
  // declaration 
  int x = 100;
  double y = 3.14;
  string s = "Hey";
  char c = 'C';
  bool f = true;
  
  // checking values
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  cout << "s = " << s << endl;
  cout << "c = " << c << endl;
  cout << "f = " << f << endl;


  // get values from the user
  cout << "Enter values for x, y, s, c, f (separated by a space): " << endl;
  cin >> x;
  cin >> y;
  cin >> s;
  cin >> c;
  cin >> f;

  // checking values
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  cout << "s = " << s << endl;
  cout << "c = " << c << endl;
  cout << "f = " << f << endl;

  return 0;
}

