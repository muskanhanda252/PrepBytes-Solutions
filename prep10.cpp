#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,total=0,total2=0; //number of soldiers
cin>>n;
int arr[n];
for(i=0;i<n;i++)
    {
    cin>>arr[i];  //number of weapons with each soldier
    }
for(i=0;i<n;i++)
    {
     if(arr[i]%2==0){
     total++;
     }
     else
     {
     total2++;
     }s
    }
if(total>total2)
{
    cout<<"Ready For Battle";
}
else
{
    cout<<"NOT READY";
}
return 0;
}
