#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    
    if(s.size() <= 1) {
        cout << s.size();
        return 0;
    }
    char *p = &s[0], *c = &s[1]; //Double cursors
    int max = 0, counter = 0;

    while(*c){
        if(*p == *c){
            counter++;
            max = max*(max > counter) + counter*(counter >= max);
        }
        else counter = 0;
        c++; p++;
    }
    max++;
    cout << max;
    return 1;
}