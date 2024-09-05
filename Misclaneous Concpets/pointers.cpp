// Symbol Table
#include <bits/stdc++.h>
using namespace std;

int main()
{
  // if initialize with this method, will point to a memory that might 
  // be out of program's memory, which is dengerous and bad practice
  // int *ptr;
  // We can declear a null pointer, thet points nowhere (segmentation fault)
  int *ptr2 = 0;

  int num=5;
  int *ptr = &num;
  ptr2 = &num;

  // & is address of operator, which as the name suggest gives address of num
  // this numm is stored in variable ptr;
  ptr = &num;
  //prints the value stored in ptr, that is the address;
  cout<<ptr<<endl;
  cout<<ptr2<<endl;
  //* is the dereference operator, which dereferences the address and gives us the
  //data needed
  cout<<"Value stored at address "<<ptr<<" is "<<*ptr<<endl;
  //size of pointer is 
  cout<<"Size of pointer is "<<sizeof(ptr)<<endl;
  exit(0);
}
