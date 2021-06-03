#include <bits/stdc++.h>
  using namespace std;

  int main()
  {
    int n,counter=0;
    cin>>n;
    while(n--)
    {
      int c,d;
      cin>>c>>d;
    if(abs(c-d)>=2)
    {
      counter ++;
    }
    }
  cout<<counter<<endl;
    return 0;
  }
