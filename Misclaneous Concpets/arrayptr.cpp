#include <bits/stdc++.h>
using namespace std;

int main()
{
  //basic basic stuff
  int arr[]={1, 2, 3, 4, 5};
  int *ptr=arr;
  cout<<ptr<<endl;
  cout<<arr<<endl;
  cout<<arr[0]<<endl;
  cout<<*ptr<<endl;
  //now here is crazy stuff
  cout<<3[arr]<<endl;
  cout<<*(ptr+3)<<endl;
  exit(0);
}