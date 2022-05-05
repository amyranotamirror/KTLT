#include <iostream>
#include <string>
using namespace std;
int ascendingRows(int arr[][1000], int row, int col);
int main(){
    int arr[][1000] = {{-28,-8,-60,18},{-100,44,-1,24},{-94,92,-70,75}};
    cout << ascendingRows(arr,3,4);
}
int ascendingRows(int arr[][1000], int row, int col) {
    int result = 0;
    for(int r = 0; r < row; r++){
        int prev = arr[r][0];
        bool tick = false;
        for(int c = 1; c < col; c++){
            if(arr[r][c] > prev) {
                if(c == col - 1) result++;
                else prev = arr[r][c];
            }
            else break;
        }
    }
    return result;
}