#include <bits/stdc++.h>
using namespace std;

int main()
{
  int m;
  cin>>m;
  int **arr = new int*[m];
  for(int i=0; i<m; i++)
  {
    int n;
    cout<<"enter size of array for index i="<<m<<endl;
    cin>>n;
    arr[i]= new int [n];  
  }
  
}