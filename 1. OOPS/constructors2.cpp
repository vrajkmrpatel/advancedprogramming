/*
      Constructor
      1) No return type
      2) Same name as the class
      3) Can have parameters. Can also have an empty parameter list
      4) Usually used to initialize member variables of a class
*/

#include <bits/stdc++.h>
#define PI 3.1415926535897932384626433832795

using namespace std;

class Cylinder
{
private:
      double radius;
      double height;

public:
      // Constructor

      // constructor with no parameters
      Cylinder()
      {
            radius = 2.0;
            height = 3.0;
      }

      // constructor with parameters
      Cylinder(double radius_param, double height_param)
      {
            radius = radius_param;
            height = height_param;
      }

      // Member function
      double volume()
      {
            return PI * radius * radius * height;
      }
};

int main()
{
      Cylinder c1; // Object
      cout << "Volume : " << c1.volume() << endl;

           


      return 0;
}