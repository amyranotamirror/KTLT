#include <bits/stdc++.h>
using namespace std;
void calSum(string fileName){
    ifstream inputFile;
    inputFile.open(fileName,std::ios::in);
    long long int temp, sum = 0;  
    if(inputFile.is_open()){
        while(!inputFile.eof() && inputFile >> temp){
            sum += temp;
        }
    }
    inputFile.close();
    cout << sum;
}
int main(){
    string fileName = "input.txt";
    calSum(fileName);
}
