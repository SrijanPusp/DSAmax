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
//taking in head as reference cause i want changes in actual list
void InsertAtHead(Node* &head, int d)
{
  // creating a new node here
  Node* temp = new Node(d);
  //adding the address of current head, or first node in address box of made up node
  temp -> next = head;
  // changing the pointer "head" to the new made box
  head = temp;
}
void PrintList(Node* head)
{
  while(head != NULL)
  {
    cout<<"|"<<head->data<<" "<<head->next<<"|-->";
    head = head->next;
  }
  cout<<endl;
}
void InsertAtTail(Node* &tail, int d)
{
  Node* temp = new Node(d);
  tail -> next = temp;
  tail = temp;
}
void InsertAtPosition(Node* &tail, Node* &head, int n, int d)
{
  if(n==1)
  {
    InsertAtHead(head, d);
    return;
  }
  Node * temp = head;
  int i=0;
  while(i<n)
  {
    temp = temp->next;
    i++;
  }
  if(temp->next == NULL)
  {
    InsertAtTail(tail, d);
    return;
  }
  Node* temp2 = new Node(d);
  temp2->next=head->next;
  head->next=temp2;
}
void DeletePosition(Node* &head, int n)
{
  Node* temp = head;
  if(n==1)
  {
    head = head->next;
    delete temp;
    return;    
  }
  else{
  int i=1;
  while (i<n-1)
  {
    temp = temp->next;
    i++;
  }
  Node* current = temp->next;
  temp->next = current->next;
  delete current;
  }
}
int main()
{
  Node* first = new Node(78);
  // cout<<"data = "<<first->data<<" and location of next node = "<< first->next<<"."<<endl;
  Node* head = first;
  Node* tail = first;
  InsertAtHead(head, 77);
  InsertAtHead(head, 76);
  InsertAtTail(tail, 79);
  InsertAtTail(tail, 80);
  InsertAtPosition(tail, head, 3, 77);
  InsertAtHead(head, 74);
  InsertAtPosition(tail, head, 2, 75);
  PrintList(head);
  DeletePosition(head, 1);
  PrintList(head);
  exit(0);
}