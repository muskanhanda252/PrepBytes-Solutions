#include <bits/stdc++.h>
  using namespace std;

  int main()
  {
    int x,y,z;
    cin>>x>>y>>z;
    if((x>y && x<z) || (x>z && x<y))
    {
      cout<<x;
    }
    else if((y>x && y<z) || (y>z && y<x))
    {
      cout<<y;
    }
    else if((z>y && z<x) || (z>x && z<y))
    {
      cout<<z;
    }
    return 0;
  }
