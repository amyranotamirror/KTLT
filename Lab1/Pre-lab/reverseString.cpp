#include <bits/stdc++.h>
using namespace std;
void process(const char *str, char *outstr);

int main(){
    char str[] = "this is my school" ;
    char *outstr = new char[strlen(str) + 1];
    process(str, outstr);
    cout << outstr;
}
void process(const char *str, char *outstr){
    char const *p = &(str[strlen(str) - 1]);
    int i = 0;
    for(; *p; p--, i++){
        outstr[i] = *p;
    }
    outstr[i] = '\0';
}
