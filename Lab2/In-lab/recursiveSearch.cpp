#include <bits/stdc++.h>
using namespace std;
int recursiveSearch(int& n , int m, int arr[], int index)
{
   // Implement function content here
    if(index == n) return -1; // when ran through the whole array

    if(arr[index] == m){
        for(int i = index; i < n - 1; i++){
            arr[i] = arr[i+1];
        } n--; return index;
    }
    return recursiveSearch(n , m, arr, index + 1);
}
int main(){

}