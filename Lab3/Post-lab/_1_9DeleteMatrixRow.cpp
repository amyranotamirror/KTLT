#include <iostream>
using namespace std;
bool deleteRow(int**& matrix, int r, int c, int row) {
    if(row >= r || row < 0) return false;
    int **tempMatrix = new int *[r - 1];
    for(int i = 0; i < r; i++){
        tempMatrix[i] = new int[c];
        if(i < row){
            tempMatrix[i] = matrix[i];
        }
        else{
            if(row == r - 1){
                delete[]matrix;
                matrix[row] = nullptr;
                break;
            }
            else{
                tempMatrix[i] = matrix[i+1];
            }
        }
    }
    matrix = tempMatrix;
    return true;
}
int main(){
    int r = 2, c = 3, pos = 0;
    int **matrix = new int*[r];
    int *temp1 = new int[3];
    temp1[0] = 1; temp1[1] = 2; temp1[2] = 3;
    matrix[0] = temp1;

    int *temp2 = new int[3];
    temp2[0] = 4; temp2[1] = 5; temp2[2] = 6;
    matrix[1] = temp2;
    
    // int r = 1, c = 4, pos = 0;
    // int **matrix = new int*[r];
    // int *temp1 = new int[c];
    // temp1[0] = 1; temp1[1] = 2; temp1[2] = 4; temp1[3] = 4;
    // matrix[0] = temp1;

    cout << deleteRow(matrix, r, c, pos) << endl;
    for(int i = 0; i < r - 1; i++){
        for(int j = 0; j < c; j++){
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }
}