#include <bits/stdc++.h>
using namespace std;
int findMax(int *ptr, int n);
int main(){
    int arr[] = {5, 3, -4, 1, 6};
    cout << findMax(arr, sizeof(arr) / sizeof(arr[0]));
}

int findMax(int *ptr, int n)
{
    if(n <= 0 || !(*ptr)) return 0;
    int result = -2147483648;
    while(n > 0){
        if(*ptr > result) result = *ptr;
        n--; ptr++;
    }
    return result;
}