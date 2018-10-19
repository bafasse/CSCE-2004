//---------------------------------------------------
// Purpose: Print volume and surface area of cube
// Author:  John Gauch 
//---------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
   const double HEIGHT = 3.0;
   double CubeVolume = HEIGHT * HEIGHT * HEIGHT;
   double SurfaceArea = 8 * HEIGHT;

   cout << "Volume = " << CubeVolume << "\n";
   cout << "Surface area = " << SurfaceArea << "\n";
   return 0;
}
