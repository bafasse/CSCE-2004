//---------------------------------------------------
// Purpose: Calculate the volume and area of a sphere
// Author:  John Gauch
//---------------------------------------------------
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
   // Local variable declarations
   float Radius = 0.0;
   float Volume = 0.0;
   float Area = 0.0;

   // Read input parameters
   cout << "Enter sphere radius: ";
   cin >> Radius;

   // Calculate volume
   Volume = (4.0 / 3.0) * M_PI * Radius * Radius * Radius;

   // Calculate surface area
   Area = 4.0 * M_PI * Radius * Radius;

   // Print output
   cout << "Radius = " << Radius << endl;
   cout << "Volume = " << Volume << endl;
   cout << "Area = " << Area << endl;
   return 0;
}
