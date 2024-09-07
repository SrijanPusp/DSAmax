#include <bits/stdc++.h>
using namespace std;

int getSum(int arr[], int n)
{
  int sum=0;
  for(int i=0; i<n; i++)
  {
    sum+=arr[i];
  }
  return sum;
}
int main()
{
  int n; 
  cin>>n;
  // a very bad practice as it allocates memory in runtime and not compile time. 
  // basically programs have 2 kinds of memor, stack(fixed) and heap(dynamic). when a 
  // pogram is normally created, it's allocated a stack memory of fixed size and if the 
  // value of n exceeds the stack size, code fatt jaayega.
  // int arr[n];
// ---------------------------------------------------------------------------------

  //this waym you create a heap memory for a pointer arr which points at a dynamic
  //memory of int[], that is array type;
  int *arr = new int[n];
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
  }
  cout<<"The sum of all elements = "<<getSum(arr, n)<<endl;
  //memory gets automatically freed in stack, but not in heap, so manually deleting is a good practice
  delete []arr;
  exit(0);
}