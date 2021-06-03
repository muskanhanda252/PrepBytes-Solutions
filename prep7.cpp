#include <bits/stdc++.h>
  using namespace std;

  int main()
  {
    int t;
    cin>>t;
    while(t--)
    {
      int A,B,C;
      cin>>A>>B>>C;
      if((B-A)%C==0)
        cout<<"Yes"<<endl;
      else
        cout<<"No"<<endl;
    }
    return 0;
  }
