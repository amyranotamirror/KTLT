#include <bits/stdc++.h>
using namespace std;
int diagonalDiff(int arr[][1000], int row, int col, int x, int y);
int main(){
    int arr[][1000] = {{88,72,65,37},{82,84,34,12},{74,46,88,44}};
    cout << diagonalDiff(arr,3,4,1,0);
}
int diagonalDiff(int arr[][1000], int row, int col, int x, int y){
    int dia1 = arr[x][y], dia2 = arr[x][y];
    int i,j;
    for(i = x - 1, j = y - 1; i >= 0 && j >= 0; i--, j--){
        dia1 += arr[i][j];
    }
    for(i = x + 1, j = y + 1; i < row && j < col; i++, j++){
        dia1 += arr[i][j];
    }
    for(i = x - 1, j = y + 1; i >= 0 && j < col; i--, j++){
        dia2 += arr[i][j];
    }
    for(i = x + 1, j = y - 1; i < row && j >= 0; i++, j--){
        dia2 += arr[i][j];
    }
    return abs(dia2 - dia1);
}