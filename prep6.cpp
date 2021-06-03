#include <bits/stdc++.h>
  using namespace std;

  int main()
  {
    int t;
    cin>>t;
    while(t--)
    {
      int h,m,a,b,c;
      cin>>h>>m;
      a=0.5*(60*h+m);
      b=6*m;
      c=abs(a-b);
      cout<<c<<endl;

    }
    return 0;
  }
