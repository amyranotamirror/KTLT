#include <bits/stdc++.h>
using namespace std;
void shallowCopy(int*& newArr, int*& arr) {
    // TODO
    newArr = arr;
}
int main(){
    int* arr = new int[2];
    int* newArr = nullptr;
    arr[0] = 2; arr[1] = 3; arr[2] = 4; arr[3] = 6;
    shallowCopy(newArr, arr);
    cout << newArr[0] << ' ' << newArr[1] << ' ' << newArr[2] << ' ' << newArr[3];
    delete[] arr;
}
