// using some of the manipulator of cout
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   
   int n = 10;
   int m = 3;
   double x = (double) n / m;
   cout << n << " " << m << " " << x << endl;
   cout << setw(20) << n << setw(20) << m << setw(20) << x << endl;
   cout << setprecision(15);
   cout << setw(20) << n << setw(20) << m << setw(20) << x << endl;
   cout << hex;
	cout << setw(20) << n << setw(20) << m << setw(20) << x << endl;
	cout << scientific;
	cout << setw(20) << n << setw(20) << m << setw(25) << x << endl;
	x = (double) n *100 / m;
	cout << setw(20) << n << setw(20) << m << setw(25) << x << endl;
   return 0 ;
}
