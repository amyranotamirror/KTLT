#include <bits/stdc++.h>
using namespace std;
bool completeNum(int N)
{
    int m = N/2, sum = 0;
    for(int i = 1; i <= m; i++){
        sum = i*(N % i == 0) + sum;
    }
    return sum == N;
    // TODO
}
int main(){
    bool check = completeNum(6);
    if(check) cout << "true";
    else cout << "false";
}