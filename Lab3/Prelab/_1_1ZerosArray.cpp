#include <bits/stdc++.h>
using namespace std;
int* zeros(int n){
    if(n <= 0) return nullptr;

    int *pointer = new int[n];
    for(int i = 0; i < n; i++){
        *(pointer + i) = 0;
    }
    return pointer;
}
int main(){
    int n = 10;
    int *pointer = zeros(n);
    for(int i = 0; i < n; i++){
        cout << pointer[i] << " ";
    }
}