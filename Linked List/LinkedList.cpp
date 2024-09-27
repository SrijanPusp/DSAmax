#include <bits/stdc++.h>
using namespace std;

class Node
{
  public:
  //the class (user defined data type) creates a box, that contains a data type->int
  // and a pointer of type "box", or node for this sake
  int data;
  Node* next;
  //this constructionn creates a node, or box in this case, which have data as input 
  //and value of pointer to next node is null untill specified;
  Node(int data=0) //this way if data isn't given in input, we can have 0 instead of garbage value
  {
    this->data = data;
    this->next = NULL;
  }
};
int main()
{
  Node* first = new Node(78);
  cout<<"data = "<<first->data<<" and location of next node = "<< first->next<<"."<<endl;
}