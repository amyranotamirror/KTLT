#include<iostream>
using namespace std;
int** insertCol(int**& matrix, int r, int c, int* colArr, int col) {
    // TODO
    if(r <= 0 || c <= 0 || col > c || col < 0) return nullptr;
    int **result = new int*[r];
    for(int i = 0; i < r;i++){
        result[i] = new int[c+1];
        for(int j = 0; j < c + 1; j++){
            int check = matrix[i][j]*(j < col) + colArr[i]*(j == col) + matrix[i][j-1]*(j > col);
            result[i][j] = check;
        }
    }
    matrix = result;
    return matrix;
}
int main(){
    int **matrix = new int*[2];
    int * temp1 = new int[3];
    int * temp2 = new int[3];
    temp1[0] = 1; temp1[1] = 2; temp1[2] = 3;
    temp2[0] = 4; temp2[1] = 5; temp2[2] = 6;
    matrix[0] = temp1; matrix[1] = temp2;
    
    int* insert = new int[2];
    insert[0] = 7; insert[1] = 8;
    int **result = insertCol(matrix, 2, 3, insert, 0);

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }
}