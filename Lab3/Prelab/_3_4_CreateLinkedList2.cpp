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
    node *head = new node();
    cin >> head->data;
    head->next = NULL;
    while(n > 1){
        node *curNode = new node();
        cin >> curNode->data;
        curNode->next = head;
        head = curNode;
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