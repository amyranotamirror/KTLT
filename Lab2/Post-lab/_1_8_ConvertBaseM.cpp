#include <bits/stdc++.h>
using namespace std;
int convertToBaseM(int n, int m = 2);
int main(){
    int n;
    cin >> n;
    cout << convertToBaseM(n, 4) << '\n';
    cout << convertToBaseM(n, 8) << '\n';
    cout << convertToBaseM(n);
}
int convertToBaseM(int n, int m) {
    // Write your code 
    if(n == 0) return 0;
    return n % m + 10 * convertToBaseM(n / m, m);
}