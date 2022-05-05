#include <bits/stdc++.h>
using namespace std;
void insertRow(int**& matrix, int r, int c, int* rowArr, int row) {
    // TODO
    int **newMatrix = new int*[r+1];
    for(int i = 0; i <= r; i++){
        if(i == row)
            newMatrix[i] = rowArr;
        else{
            newMatrix[i] = new int[c];
            for(int j = 0; j < c; j++){
                newMatrix[i][j] = matrix[i*(i<row) + (i-1)*(i>row)][j];
            }
        }
    }
    matrix = newMatrix;
}
int main(){
    int r = 2, c = 3, row = 2;
    int **matrix = new int*[r];
    for(int i = 0; i < r; i++){
        matrix[r] = new int[c];
        for(int j = 0; j < c; j++){
            matrix[r][c] = i + j;
        }
    }
    int *insertMatrix = new int[c];
    insertMatrix[0] = 7; insertMatrix[1] = 8; insertMatrix[2] = 9;
    insertRow(matrix, r, c, insertMatrix, row);

    for(int i = 0; i <= r; i++){
        for(int j = 0; j < c; j++){
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }

}