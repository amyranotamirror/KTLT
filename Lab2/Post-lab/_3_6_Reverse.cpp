#include <bits/stdc++.h>
using namespace std;
void reverse(int *ptr, int n)
{
    if(n < 1) return;
    int temp = *ptr;
    *ptr = *(ptr + n - 1);
    *(ptr + n - 1) = temp;
    return reverse(++ptr, n - 2);
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr, sizeof(arr) / sizeof(arr[0]));
    cout << arr[0];
    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << ", " << arr[i];
    }
}


