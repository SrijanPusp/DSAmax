#include <bits/stdc++.h>
using namespace std;

int power(int n)
{
  //base case --> last leaf of recursion tree
  if(n==0)
  {
    return 1;
  }
  //recursive call to function
  return 2*power(n-1);
}
int fib(int n)
{
  if(n==0)
  {
    return 0;
  }
  else if(n==1)
  {
    return 1;
  }
  
  return fib(n-1)+fib(n-2);
}
bool isSorted(int arr[], int size)
{
  if(size==0||size==1)
  {
    return 1;
  }
  if(arr[0]>=arr[1])
  {
    return 0;
  }
  return isSorted(arr+1, size-1);
}
int sum(int arr[], int size)
{
  if(size==0)
  {
    return 0;
  }
  if(size==1)
  {
    return arr[0];
  }
  arr[1]=arr[0]+arr[1];
  return sum(arr+1, size-1);
}
int binary(int arr[], int start, int end, int key)
{
    int mid=start+(end-start)/2;

  if(start>end)
  {
    return -1;
  }
  else if(key==arr[mid])
  {
    return mid;
  }
  else if(key>arr[mid])
  {
    binary(arr, mid, end, key);
  }
  else if(key<arr[mid])
  {
    binary(arr, start, mid, key);
  }
}
int linear(int arr[], int size, int key)
{
   if(size==0)
  {
    return -1;
  }
  if(key==arr[0])
  {
    return 0;
  }
  int x = linear(arr+1, size-1, key);
  if(x==-1)
  {
    return -1;
  }
  else 
  {
        return x + 1;
  }
}
int main()
{
  // cout<<power(4);
  // cout<<fib(7);
  int arr[]={1,2,3,4,5};
  // isSorted(arr, 5)?cout<<"yes":cout<<"no";
  // cout<<sum(arr, 5);
  if(binary(arr, 0, 5, 4)==-1)
  {
    cout<<"Not found"<<endl;
  }
  else
  {
    cout<<"found"<<binary(arr,0,  5, 4)<<endl;
  }
  exit(0);
}