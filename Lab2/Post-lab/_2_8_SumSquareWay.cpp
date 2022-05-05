#include <iostream>
#include <math.h>
using namespace std;
int countEachSum(int x, int num){
    int val = x - num*num;
    if(val == 0) return 1;
    if(val < 0) return 0;

    return countEachSum(val, num + 1) + countEachSum(x, num + 1);
}
int countWaySumOfSquare(int x)
{
	countEachSum(x, 1);
}
int main(){
    cout << countWaySumOfSquare(100);
}