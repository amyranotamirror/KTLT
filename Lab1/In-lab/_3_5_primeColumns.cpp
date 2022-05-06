#include <iostream>
#include <string>
#include <vector>

using namespace std;
int primeColumns(int arr[][1000], int row, int col);
int isPrime(int sum);

int main(){
    int arr[][1000] = {{34,-15,11,-70,-23,24},{-39,-90,63,-45,-52,48},{-42,92,55,92,82,81}};
    cout << primeColumns(arr,3,6);
}
int isPrime(int sum){
    if(sum <= 1) return 0; //Prime number can not be lower than 2

    //Function to find Prime number
    int limit = sum/2;
    for(int i = 2; i <= limit; i++){
        if(sum%i == 0) return 0;//not Prime number
    }
    return 1;//is Prime number
}
int primeColumns(int arr[][1000], int row, int col) {
    int result = 0;
    for(int c = 0; c < col; c++){
        int sum = 0;
        for(int r = 0; r < row; r++){
            sum += arr[r][c];
        }
        result += 1*isPrime(sum);
    }
    return result;
}

