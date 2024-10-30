#include<bits/stdc++.h>

using namespace std;

// userdefine type
class smallObj{

private:
      int data;

public:
      // member functions
      void setdata(int d)
      {
            data = d;
      }

      void showdata(){
            cout << data << endl;
      }
};
int main()
{
      smallObj d1;
      smallObj d2;

      d1.setdata(1002);
      d2.setdata(1776);

      d1.showdata();
      d2.showdata();
      
      return 0;
}