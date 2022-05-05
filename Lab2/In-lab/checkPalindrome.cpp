#include <bits/stdc++.h>
using namespace std;


int strLength(const char *str){
    int len=0;
    while(*str){
        len++; str++;
    }return len;
}
bool isPalindrome(const char * str){
    int len = strLength(str);
    if(len == 0) return false;
    int mid = len / 2, odd_even = len % 2, left = mid-1, right;
    if(odd_even)
        right = mid+1;
    else
        right = mid;
    
    for(; left >=0, right < len; left--, right++){
        if(str[left] != str[right]) return false;
    }
    return true;
}
int main(){
    const char* str = "abba";
    cout << isPalindrome(str);
}