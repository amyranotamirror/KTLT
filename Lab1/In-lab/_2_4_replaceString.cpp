#include <bits/stdc++.h>
using namespace std;

void replaceString(string s, string s1, string s2){
    //Constraint to continue with the replacing process
    if(s1.empty() || s.empty() || s.size() < s1.size() || s.find(s1) == std::string::npos) {
        cout << s;
        return;
    }
    int cursor = 0, position = 0, first = 1;
    
    position = s.find(s1);
    string temp = s;

    while(position!=std::string::npos){
        cursor += position + 1*(first!=1);
        if(first == 1){
            first = 0;
        }
        else{
        }
        temp = temp.substr(position+1);
        position = temp.find(s1);
    }

    s.replace(cursor, s1.size(), s2);
    cout << s;
    return;
}

int main(){
    string s = "Truong Dai Hoc Bach Khoa, Sai Gon";
    string s1 = "ai";
    string s2 = "";
    replaceString(s, s1, s2);
}