#include <iostream>
using namespace std;
char* concatStr(char* str1, char* str2);
int main(){
    char s1[] = "That's ";
    char s2[] = "a good idea.";
    char* s = concatStr(s1, s2);
    cout << s;
    delete[] s;
}
char* concatStr(char* str1, char* str2) {
    // TODO
    int len1 = 0, len2 = 0, pos = 0;
    while(str1[pos++] != '\0')len1++;
    pos = 0;
    while(str2[pos++] != '\0') len2++;
    int len = len1+len2;
    char *s = new char[len+1];
    for(int i = 0; i < len1; i++){
        s[i] = str1[i];
    }
    for(int i = 0, pos = len1; i < len2, pos < len; i++, pos++){
        s[pos] = str2[i];
    }
    s[len] = '\0';
    return s;
}
