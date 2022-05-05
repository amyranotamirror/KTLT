#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void threeChars(string fileName);
int main(){
    threeChars("input_4_1.txt");

}
void threeChars(string fileName)   {
    ifstream inputFile;
    inputFile.open(fileName,std::ios::in);
    string temp;
    if(inputFile.is_open()){
        while(inputFile >> temp && temp != "***" && !inputFile.eof()){
            bool check = (temp[2] - temp[1] >= 0) && (temp[1] - temp[0] >= 0);
            switch(check){
                case 1: cout << "true" << '\n'; break;
                case 0: cout << "false" << '\n'; break;
            }
        }
    }
}