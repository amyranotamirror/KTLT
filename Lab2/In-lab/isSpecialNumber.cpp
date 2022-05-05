#include <bits/stdc++.h>
using namespace std;
bool isSpecialNumber(int n) {
    // Write your code
    if(n < 2 || (n != 2 && n % 2 == 0)) return false;

    int limit = n / 2, temp = n, sum = temp % 10;
    while(temp / 10 != 0){
        temp = temp / 10;
        sum += temp % 10;
    }
    for(int i = 2; i < limit; i++){
        if(n % i == 0) return false;
    }
    for(int j = 2; j < sum; j++){
        if(sum % j == 0) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    cout << isSpecialNumber(n);
}