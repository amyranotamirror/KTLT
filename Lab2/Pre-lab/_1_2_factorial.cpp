#include <iostream>

using namespace std;
// implement calculate factorial function in here

long calFactorial(int N){
    long result = N;
    while(N > 1)
        result *= --N;
    return result;
}

int main(int narg, char** argv)
{
    int N;
    cin >> N;
    long result = calFactorial(N);
    cout << result << endl;
    return 0;
}