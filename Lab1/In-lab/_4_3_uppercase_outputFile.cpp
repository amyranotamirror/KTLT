#include <bits/stdc++.h>
using namespace std;
bool isLower(char letter){
    if(letter >= 'a' && letter <= 'z') 
        return true;
    return false;
}
void uppercase(string output)   {
    // TODO
    ofstream outputFile;
    outputFile.open(output, std::ios::out);
    string s = "";
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        if(isLower(s[i]))
            outputFile << char(toupper(s[i]));
        else outputFile << s[i];
    }
}
int main(){
    uppercase("output.txt");
}