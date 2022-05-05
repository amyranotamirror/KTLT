#include <bits/stdc++.h>
using namespace std;
bool isSymmetric(int arr[][1000], int row, int col);
int main(){
    int arr[][1000] = {{1,9,6}, {4,5,3}, {6,3,9}};
    cout << isSymmetric(arr,3,3);
}
bool isSymmetric(int arr[][1000], int row, int col) {
    for(int i = 0; i < row - 1; i++){
        for(int j = i+1; j < col; j++){
            if(arr[i][j] != arr[j][i]) return false;
        }
    }
    return true;
}