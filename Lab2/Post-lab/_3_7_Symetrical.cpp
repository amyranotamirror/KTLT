#include <bits/stdc++.h>
using namespace std;
bool isSymmetry(int *head, int *tail);
int main(){
    int arr[] = {2, 2};
    cout << isSymmetry(arr, arr + (sizeof(arr) / sizeof(arr[0])) - 1);
}

bool isSymmetry(int *head, int *tail)
{
    if(head == tail || ((head == (tail - 1)) && (*head == *tail))) return true;
    return *head == *tail && isSymmetry(++head, --tail);
}