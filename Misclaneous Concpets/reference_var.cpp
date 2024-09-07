#include <bits/stdc++.h>
using namespace std;

//passed by reference in the function, that is a reference var is 
//created and it basically is the same memory block with varios names
//just like me with s & r but with same val
void increase(int &a)
{
  a++;
}
//very bad practice as it creates reference variable and other stuff in 
//temporary, i.e. local variable which will die after the func is over
int &func(int a)
{
  int num = a;
  int &ans = num;
  return ans;
}
int main()
{
  int a = 5;
  cout<<"a = "<<a<<endl; 
  increase(a);
  cout<<"Increased a = "<<a<<endl;
  
}