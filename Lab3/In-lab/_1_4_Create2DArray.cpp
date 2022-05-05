#include <iostream>
using namespace std;
int** readArray();
int main(){
    int **arr = new int *[10];
    arr = readArray();
}
int** readArray()
{
   //TODO
   int **arr = new int*[10];
   for(int i = 0; i < 10; i++){
    arr[i] = new int[10];
       bool printZeros = false;
       int pos = 0;
       for(int j = 0; j < 10; j++){
           int temp;
           cin >> temp;
           arr[i][j] = temp;
           if(temp == 0){
               printZeros = true;
               pos = j + 1;
               break;
           }
           
       }
       if(printZeros == true){
           for(int j = pos; j < 10; j++){
               arr[i][j] = 0;
           }
       }
       for(int cur = 0; cur < 10; cur++){
           cout << arr[i][cur] << " ";
       }
       cout << endl;
   }
   return arr;
}

