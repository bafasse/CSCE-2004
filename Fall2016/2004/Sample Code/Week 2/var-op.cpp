// Include statements
#include <iostream>
using namespace std;

// Main function
int main ()
{
  // Constant declaration 
  int x = 100;
  int y = 3;
  
  double dx = 100;
  double dy = 3;
  
  // checking on additions with mixed type
  cout << "x + y = " << x + y << endl;
  cout << "dx + y = " << dx + y << endl;

  // checking on divisions with mixed type
  cout << "x/y = " << x/y << endl;
  cout << "dx/dy = " << dx/dy << endl;
  cout << "x/dy = " << x/dy << endl;
  cout << "dx/y = " << dx/y << endl;

  // Get user input
  cout << "Enter values for x, y (separated by a space): " << endl;
  cin >> x >> y;

  // Perform arithmetic operations
  int sum = x + y;
  int difference = x - y;
  int quotient = x / y;
  int remainder = x % y;
  int product = x * y;

  // Print results 
  cout << "The sum (x + y) is: " << sum << endl;
  cout << "The difference (x - y) is: " << difference << endl;
  cout << "The quotient (x / y) is: " << quotient << endl;
  cout << "The remainder (x % y) is: " << remainder << endl;
  cout << "The product (x * y) is: " << product << endl;

  return 0;
}

