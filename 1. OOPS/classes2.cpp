#include <bits/stdc++.h>
#define PI 3.1415926535897932384626433832795

using namespace std;

class Cylinder
{
public:
      double radius{1.0};
      double height{1.0};

public:
      // Member function
      double volume()
      {
            return PI * radius * radius * height;
      }
};

int main()
{
      Cylinder c1; // Objects

      cout << "Radius : " << c1.radius << endl;
      cout << "Height : " << c1.height << endl;
      cout << "Volume : " << c1.volume() << endl;

      cout << "After Change..." << endl;
      // change the member variables
      c1.radius = 3.0;
      c1.height = 2;

      cout << "Radius : " << c1.radius << endl;
      cout << "Height : " << c1.height << endl;
      cout << "Volume : " << c1.volume() << endl;

      cout << "Again Change..." << endl;
      c1.height = 8;
      cout << "Radius : " << c1.radius << endl;
      cout << "Height : " << c1.height << endl;
      cout << "Volume : " << c1.volume() << endl;

      return 0;
}