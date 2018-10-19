//---------------------------------------------------
// Purpose: Calculate mean and variance of five input values
// Author:  John Gauch
//---------------------------------------------------
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
   // Local variable declarations
   float Num1 = 0, Num2 = 0, Num3 = 0, Num4 = 0, Num5 = 0;
   float Dif1 = 0, Dif2 = 0, Dif3 = 0, Dif4 = 0, Dif5 = 0;
   float Mean = 0, Var = 0;

   // Read input parameters
   cout << "Enter five numbers: ";
   cin >> Num1 >> Num2 >> Num3 >> Num4 >> Num5;

   // Calculate mean
   Mean = (Num1 + Num2 + Num3 + Num4 + Num5) / 5.0;

   // Calculate variance
   Dif1 = Num1 - Mean;
   Dif2 = Num2 - Mean;
   Dif3 = Num3 - Mean;
   Dif4 = Num4 - Mean;
   Dif5 = Num5 - Mean;
   Var = (Dif1 * Dif1 + Dif2 * Dif2 + Dif3 * Dif3
	  + Dif4 * Dif4 + Dif5 * Dif5) / 5.0;

   // Print statistics
   cout << "Mean = " << Mean << endl;
   cout << "Variance = " << Var << endl;
   return 0;
}
