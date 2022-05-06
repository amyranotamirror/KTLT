#include <bits/stdc++.h>
using namespace std;

void deleteMatrix(int**& matrix, int r) {
    // TODO;
    if(r <= 0) {
        matrix = NULL;
        return;}
    for(int i = 0; i < r; i++){
        delete [] matrix[i];
    }
    delete []matrix;
    matrix = NULL;
}

int main(){
    int r = 3;
    int **matrix = new int*[r];
    int *temp1 = new int[2];
    temp1[0] = 2; temp1[1] = 2;
    matrix[0] = temp1;

    int *temp2 = new int[2];
    temp2[0] = 1; temp2[1] = 1;
    matrix[1] = temp2;

    int *temp3 = new int[2];
    temp3[0] = 1; temp3[1] = 1;
    matrix[2] = temp3;

    deleteMatrix(matrix, r);
    for(int i = 0; i < r; i++){
        for(int j = 0; j < 5; j++){
            cout << *(matrix[i] + j) << ' ';
        }
        cout << '\n';
    }
}
