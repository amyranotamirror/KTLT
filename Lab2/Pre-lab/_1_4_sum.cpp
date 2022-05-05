#include <iostream>

using namespace std;
void sum2(int * array, int numEls, int &result)
{
    // TODO
    if(!array || numEls == 0) return;
    result = 0;
    while(array && numEls > 0){
        result += *array;
        array++; numEls--;
    }
}
int main(){
    int numEls = 10, result;
    int arr[numEls] = {-11, 111, -1111, -112, -101, 11, -19, 1, 145, 12};
    sum2(arr, numEls, result);
    cout << result;
}