#include <bits/stdc++.h>
using namespace std;
void cutString(string s, int index);

int main(){
    string s = "";
    cutString(s, 7);
}
void cutString(string s, int index){
    // TO DO
    if(s.empty() || index > s.size()){
        cout << "";
        return;
    }
    cout << s.substr(index);
}