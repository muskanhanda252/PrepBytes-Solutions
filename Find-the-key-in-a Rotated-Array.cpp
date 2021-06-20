#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int key, int low, int high)
{
if(low>high)
return -1;

int mid=low+(high-low)/2;

    if(arr[mid]==key)
    return mid;

    else if(arr[mid]>key)
    return BinarySearch(arr,key,low,mid-1);

    return BinarySearch(arr,key,mid+1,high);
}

int FindPivot(int arr[],int low, int high)
{
if(low>high)
return -1;

int mid=low+(high-low)/2;

    if(mid<high && arr[mid]>arr[mid+1]) //should not go beyond the last element.
    return mid+1;

    else if(mid>low && arr[mid]<arr[mid-1]) //should not go before the 1st element
    return mid;

    else if(arr[low]>arr[mid])
        return(FindPivot(arr,low,mid-1));

    return(FindPivot(arr,mid+1,high));
}

int FindKey(int arr[], int n, int key)

{
int pivot= FindPivot(arr,0,n-1);
    if(pivot==-1)
    {
    BinarySearch(arr,key,0,n-1);
    }
    else if(arr[pivot]==key)
    {
    return pivot;
    }
    else if(arr[0]<=key)
    return BinarySearch(arr,key,0,pivot-1);

return BinarySearch(arr,key,pivot+1,n-1);
}
int main()
{
int n,key;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cin>>key;
cout<<"The index of the "<<key<<" is "<<FindKey(arr,n,key)<<endl;
return 0;
}
