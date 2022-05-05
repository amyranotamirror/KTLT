#include <bits/stdc++.h>
using namespace std;
int strLen(char* str)     
{ 
    /*  
     * STUDENT ANSWER
     */
    if(*str == '\0')
        return 0; //base case when we have reached the end of line
    else return 1 + strLen(str+1); //stacking function
}
int main(){
    char str[] = "Truong DH Bach Khoa";
    cout << strLen(str);
}