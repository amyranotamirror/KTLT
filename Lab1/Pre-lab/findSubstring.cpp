#include <bits/stdc++.h>
using namespace std;
void findAllIndex(string s1, string s2);
int main(){
    string s1 = "Truong Dai Hoc Bach Khoa.";
    string s2 = "a";
    findAllIndex(s1, s2);
}
void findAllIndex(string s1, string s2){
    if(s1.empty() || s2.empty() || s1.size() < s2.size() || s1.find(s2) == std::string::npos) {
        cout << -1;
        return;
    }
    int cursor = 0, position = 0, first = 1;
    
    position = s1.find(s2);

    while(position!=std::string::npos){
        cursor += position + 1*(first!=1);
        if(first == 1){
            cout << cursor;
            first = 0;
        }
        else{
            cout << ' ' << cursor;
        }
        s1 = s1.substr(position+1);
        position = s1.find(s2);
    }
    return;
}
