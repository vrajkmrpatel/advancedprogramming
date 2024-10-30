#include <bits/stdc++.h>

using namespace std;

class part
{

private:
      int modelnumber;
      int partnumber;
      float cost;

public:
      void setpart(int mn, int pn, float c)
      {
            modelnumber = mn;
            partnumber = pn;
            cost = c;
      }

      void showpart()
      {
            cout << "Model " << modelnumber << " ,Part " << partnumber << " ,cost $" << cost << endl;
      }
};

int main()
{
      part p1;

      p1.setpart(6244, 373, 234.33F);
      p1.showpart();
      return 0;
}