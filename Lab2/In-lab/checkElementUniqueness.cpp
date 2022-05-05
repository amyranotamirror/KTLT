#include <bits/stdc++.h>
using namespace std;
bool checkElementsUniqueness(int* arr, int n) {
    // Write your code 
    int temp[1001];
    for(int i = 0; i < 1001; i++){
        temp[i] = -9;
    }
    for(int i = 0; i < n; i++){
        if(temp[arr[i]] == -9){
            temp[arr[i]] = 1;
        }
        else return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << checkElementsUniqueness(arr, n);
    delete[] arr;
}