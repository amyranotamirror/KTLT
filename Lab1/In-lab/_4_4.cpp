#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void process(string fileName);

int main(){
    process("input_4_4.txt");
}
void process(string fileName)   {
    ifstream inputfile;
    inputfile.open(fileName, ios::in);

    if(inputfile.is_open()){
        int n = 0, m = 0;
        inputfile >> n;
        inputfile >> m;

        if(inputfile.eof()) return;
        long double glo_max = -100000000000, temp = 0.0;
        if(n && m) {
            for(int row = 0; row < n; row++){
                long double max = -100000000000;
                for(int col = 0; col < m; col++){
                    inputfile >> temp;
                    max = max*(max > temp) + temp*(temp >= max);
                }
                cout << max << ' ';
                glo_max = glo_max*(glo_max > max) + max*(max >= glo_max);
            }
        }
        cout << glo_max;
        inputfile.close();
    }
}