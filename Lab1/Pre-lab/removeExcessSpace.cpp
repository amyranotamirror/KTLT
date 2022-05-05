#include <bits/stdc++.h>
using namespace std;
void process(char str[], char outstr[]);
int main(){
    char str[] = "  a  bc  def  ghi     h  " ;
    char *outstr = new char[strlen(str) + 1];
    process(str, outstr);
    cout << outstr;
}

void process(char str[], char outstr[]) {
    int flag, i = 0;
    char *p = str;

    *p == ' ' ? flag = 1: flag = 0;
    for(; *p; p++){
        if(flag == 0 || *p != ' '){
            outstr[i] = *p; i++;
            if (*p == ' ') flag = 1;
            else flag = 0;
        }
    }
    if(i < strlen(str) + 1){
        outstr[i] = '\0';
    }
}