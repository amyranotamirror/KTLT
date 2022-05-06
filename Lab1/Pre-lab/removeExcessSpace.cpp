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

    *p == ' ' ? flag = 1: flag = 0; //raise a flag if there's a blank space
    for(; *p; p++){ //iterative pointer
        if(flag == 0 || *p != ' '){ //flag is not raised or current character is non-space: allows only 1 space after each non-space
            outstr[i] = *p; i++; //insert either non-space or single blank space after each non-space charater
            if (*p == ' ') flag = 1; //update flag: don't allow another space, except one after each character
            else flag = 0; //current character is not a space => update flag to allow inserting next character
        }
    }
    if(i < strlen(str) + 1){
        outstr[i] = '\0';//end of string
    }
}