#include <bits/stdc++.h>
using namespace std;
int calc(char str[]);
int main(){
    char str[] = "001011" ;
    cout << calc(str);
}
int calc(char str[]){
    char *p = &(str[strlen(str) - 1]);
    int i = 0, decimal = 0, multi = 1;
    for(; *p, i < strlen(str); p--, i++){
        decimal += int(*p - '0') * multi;
        multi *= 2;
    }
    return decimal;
}