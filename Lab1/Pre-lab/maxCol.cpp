#include <bits/stdc++.h>
using namespace std;
int findMaxColumn(int arr[][1000], int row, int col);
int main(){
    int arr[][1000] = {{-92,78,-2,-58,-37},{44,-4,30,-69,22}};
    cout << findMaxColumn(arr, 2,5);
}
int findMaxColumn(int arr[][1000], int row, int col) {
    int max=INT_MIN, max_idx=0;
    for(int j = 0; j < col; j++){
        int sumCol = 0;
        for(int i = 0; i < row; i++){
            sumCol += arr[i][j];
        }
        if(sumCol >= max){
            max = sumCol;
            max_idx = j;
        }
    }
    return max_idx;
}