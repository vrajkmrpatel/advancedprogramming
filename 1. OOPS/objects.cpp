#include <bits/stdc++.h>

using namespace std;

class Person
{
      string name;
      int age;

public:
      // Constructor
      Person(string name, int age) : name(name), age(age) {}

      // Method
      void getDetails()
      {
            cout << "Name of the person with age " << age << " is " << name << endl;
      }
};
int main()
{
      Person p1("Vraj", 23);
      p1.getDetails();
      return 0;
}