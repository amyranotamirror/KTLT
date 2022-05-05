#include <bits/stdc++.h>
using namespace std;
int calcSum(int *ptr, int n)
{
    if(!ptr || n <= 0) return 0;
    int result = 0;
    while(ptr && n > 0){
        result += *ptr;
        ptr++; n--;
    }return result;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    cout << calcSum(arr, sizeof(arr) / sizeof(arr[0]));
}