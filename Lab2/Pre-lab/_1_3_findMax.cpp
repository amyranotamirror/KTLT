#include <bits/stdc++.h>
using namespace std;
int findMax(int *vals, int numEls) {
    if(numEls <= 0 || !vals) return 0;
    int maxNum = *vals;
    while(vals && numEls > 0){
        maxNum = (*vals)*(*vals > maxNum) + maxNum*(*vals <= maxNum);
        vals++;numEls--;
    };
    return maxNum;
}
int main(){
    int vals[10] = {-11, 111, -1111, -112, -101, 11, -19, 1, 145, 12};
    cout << findMax(vals, 10);
}