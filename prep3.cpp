#include<iostream>
using namespace std;
int main()
{
int cases;
cout<<"Enter the number of cases: ";
cin>>cases;
while(cases--){
int n,count=0,rem=0,fav;
cout<<"Enter the Number: "<<endl;
cin>>n;
cout<<"The number you want to search: "<<endl;
cin>>fav;
while(n!=0)
{
rem=n%10;
n=n/10;
if(rem==fav)
{
count++;
}
}
cout<<count<<endl;
}
}
