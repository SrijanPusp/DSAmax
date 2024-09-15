#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cout<<"m and n"<<endl;
  cin>>m>>n;
  int **arr = new int *[m];
  // creating array of poointers
  for(int i=0; i<m; i++)
  {
    arr[i]=new int[n];
  }
  // creating arrays of size n assocoated with the array of pointers
  cout<<"array"<<endl;
  for(int i=0; i<m; i++)
  {
    for (int j=0; j<n; j++)
    {
      cin>>arr[i][j];
    }
  }
  //printing array
  for(int i=0; i<m; i++)
  {
    for (int j=0; j<n; j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  //deleting memory, first the cluster of m arrays
  for(int i=0; i<m; i++)
  {
    delete [] arr[i];
  }
  // then the array containing m pointers
  delete [] arr;
}