#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};
void insertAtHead(Node *head)
{

  Node *temp = head;
  temp->next = head;
  head = temp;
}
// insert at head code
void insertAtfront()
{
}
void tranverselist(Node *head)
{
  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}

int main()
{
  Node *newptr = new Node(20);
  Node *head = new Node(10);
  tranverselist(newptr);
  tranverselist(head);
  return 0;
}