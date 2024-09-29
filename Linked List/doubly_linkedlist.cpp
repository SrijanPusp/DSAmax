#include <bits/stdc++.h>
using namespace std;

class Node
{
  public:
  int data;
  Node* prev;
  Node* next;

  Node(int data)
  {
    this->data = data;
    prev = NULL;
    next = NULL;
  }
};
void print(Node* head)
{
  Node* temp = head;
  while(temp != NULL)
  {
    cout<<temp->prev<<" "<<temp->data<<" "<<temp->next<<" --> ";
    temp = temp->next;
  }
  cout<<endl;
}
void InsertAtHead(Node* &head, int data)
{
  Node* temp = new Node(data);
  temp->next = head;
  if (head != NULL)
  {
    head->prev = temp;
  }
  head = temp;
}
void InsertAtTail(Node* &tail, int data)
{
  Node* temp = new Node(data);
  temp -> prev = tail;
  tail -> next = temp;
  tail = temp;
}
void InsertAtPos(int pos, Node* &head ,Node* &tail, int data)
{
  if(pos==1)
  {
    InsertAtHead(head, data);
    return;
  }
  Node* temp = head;
  int count = 1;
  while(count<pos-1)
  {
    temp = temp->next;
    count++;
  }
  Node* temp2 = new Node(data);
  if(temp->next == NULL)
  {
    InsertAtTail(tail, data);
    return;
  }
  temp2 -> prev = temp;
  temp2->next = temp->next;
  temp->next = temp2;

}
void DeletePos(int pos, Node* &head)
{
  if(pos==1)
  {
    Node* temp = head->next;
    head = temp->next;
    head->prev = NULL; 
    delete temp;
  }
  else
  {
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;
    while(cnt < pos) {
        prev = curr;
        curr = curr -> next;
        cnt++;
    }

    curr -> prev = NULL;
    prev -> next = curr -> next;
    curr -> next = NULL;

    delete curr;

  }
}
int main()
{
  Node* node = new Node(10);
  Node* head = node;
  Node* tail = node;
  print(head);
  InsertAtHead(head, 8);
  InsertAtTail(tail, 11);
  InsertAtHead(head, 7);
  InsertAtTail(tail, 12);
  InsertAtTail(tail, 13);
  InsertAtPos(3, head, tail, 9);
  InsertAtPos(5, head, tail, 11);
  InsertAtPos(9, head, tail, 14);
  print(head);
  DeletePos(5, head);
  print(head);
  exit(0);
}