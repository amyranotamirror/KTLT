#include <iostream>
using namespace std;
struct node
{
  int data;
  node *next;
};

node *createLinkedList(int n){
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
} // The implementation is provided implicitly

void replace(node* head, int position, int value)
{
  //TODO
  if(position < 0) return;
  node *traverse = new node();
  traverse = head;
  while(position > 0 && traverse->next != NULL){
      traverse = traverse->next;
      position--;
  }
  if(position > 0) return;
  traverse->data = value;
}
void print(node *head)
{
  while (head != nullptr)
  {
    cout << head->data << " ";
    head = head->next;
  }
  cout<<endl;
}
int main()
{
  int n = 0;
  cin >> n;
  node *head = createLinkedList(n);
  print(head);
  int pos, val;
  cin>>pos>>val;
  replace(head, pos, val);
  print(head);
  return 0;
}
