#include <iostream>
using namespace std;
struct node
{
  int data;
  node *next;
};

node *createLinkedList(int n){
     // TO DO
  if(n <= 0) return nullptr;
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

int searchLinkedList(node* head, int key)
{
  // TODO
  int pos = 0;
  if(head->data == key) return pos;
  while(head->next != NULL){
      if(head->data == key) return pos;
      else{
          pos++;
          head = head->next;
      }
  }

  return -1;
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
  node *head = createLinkedList(n);
  print(head);
  int m;
  cin>>m;
  cout<<searchLinkedList(head,m);
  return 0;
}
