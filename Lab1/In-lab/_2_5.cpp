#include <iostream>
#include <string>
using namespace std;
void deleteWord(string s, string s1);
int main(){
    string s = "Truong Dai Hoc Bach Khoa, Sai Gon";
    string s1 = "ai";
    deleteWord(s, s1);
}

void deleteWord(string s, string s1){
    //Constraint to continue with the replacing process
    if(s.empty() || s1.empty() || s1.size() > s.size() || s.find(s1) == std::string::npos){
        cout << s;
        return;
    }

    int position = s.find(s1);
    string temp = s;

    while(position != std::string::npos){
        s.replace(position, s1.size(), "");
        position = s.find(s1);
    }
    cout << s;
}