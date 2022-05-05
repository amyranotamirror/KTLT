#include <bits/stdc++.h>
using namespace std;
int getValueAtIndex(int *ptr, int k)
{
    return *(ptr+k);
}
int main(){
    int arr[] = {1, 4, 6, 8, 10};
    int k = 1;
    cout << getValueAtIndex(arr, k);
}