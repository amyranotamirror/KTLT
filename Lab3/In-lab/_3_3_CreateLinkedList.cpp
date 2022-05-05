#include <iostream>
using namespace std;
struct node
{
  int data;
  node *next;
};
node *createLinkedList(int n)
{
  // TO DO
  node *tail = new node();
  node *head;
  cin >> tail->data;
  tail->next = NULL;
  head = tail;

  while(n > 1){
      node *temp = new node();
      cin >> temp->data;
      temp->next = NULL;
      tail->next = temp;
      tail = temp;
      n--;
  }
  return head;
}
void print(node *head)
{
  while (head != nullptr)
  {
    cout << head->data << endl;
    head = head->next;
  }
}
int main()
{
  int n = 0;
  cin >> n;
  if (n > 0)
  {
    node *head = createLinkedList(n);
    print(head);
  }
  else
  {
    cout << "Invalid n" << endl;
  }
  return 0;
}
