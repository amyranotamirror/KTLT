#include<iostream>
using namespace std;
bool deleteCol(int**& matrix, int r, int c, int col) {
    // TODO
}
bool deleteCol(int**& matrix, int r, int c, int col) {
    // TODO
    if(col >= c || col < 0) return false;
    else if(col == c - 1){
        //Deallocating dynamic array
        delete[]matrix;
        matrix = nullptr;
        return NULL;
    }
    int **temp = new int *[r];
    int columnLength = c - 1;
    for(int i = 0; i < r; i++){
        temp[i] = new int[columnLength];
        for(int j = 0; j < columnLength; j++){
            if(j >= col){
                temp[i][j] = matrix[i][j+1];
            }
            else temp[i][j] = matrix[i][j];
        }
    }
    matrix = temp;
    return true;
}
int main(){
    int r = 2, c = 3, pos = 2;
    int **matrix = new int*[r];
    int *temp1 = new int[3];
    temp1[0] = 1; temp1[1] = 2; temp1[2] = 3;
    matrix[0] = temp1;

    int *temp2 = new int[3];
    temp2[0] = 4; temp2[1] = 5; temp2[2] = 6;
    matrix[1] = temp2;
}