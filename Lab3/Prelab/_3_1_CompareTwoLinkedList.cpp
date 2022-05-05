#include <iostream>
using namespace std;
struct node
{
  int data;
  node *next;
};

node *createLinkedList(int n); // The implementation is provided implicitly

bool isEqual(node *head1, node *head2)
{
  // TO DO
  int sizeList1 = 1, sizeList2 = 1;
  while(head1->next != NULL || head2->next != NULL){
      if(head1->data != head2->data) return false;
      head1 = head1->next;
      head2 = head2->next;
      sizeList1++;sizeList2++;
  }
  return sizeList1 == sizeList2 && head1->data == head2->data;
}

int main()
{
  int n = 0;
  cin>> n;
  node *head1 = createLinkedList(n);
  int m = 0;
  cin>> m;
  node *head2 = createLinkedList(m);
  cout << isEqual(head1, head2) << endl;
  return 0;
}
