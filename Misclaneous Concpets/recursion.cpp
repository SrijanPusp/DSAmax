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
int main()
{
  // cout<<power(4);
  cout<<fib(7);
  exit(0);
}