#include<iostream>
#include<string>
using namespace std;
/* END of library */
bool palindrome(string strg)
{
    char *p = &strg[0];
    while(*p){
        if(strg[0] != strg[strg.size() - 1]) return false;
        strg = strg.substr(1, strg.size() - 2);
        p++;
    }
    return true;
}
bool palindromeRecursion(string s)
{
    if(s.size() <= 1) return true;

    return (s[0] == s[s.size() - 1]) && palindromeRecursion(s.substr(1, s.size() - 2)); 
}
int main()
{
    // BEGIN YOUR IMPLEMENTATION [2]
    // TODO
    string s;
    getline(cin, s);
    while(s[0] != '*'){
        if(palindrome(s)) cout << "true" << " ";
        else cout << "false" << " ";
        
        if(palindromeRecursion(s)) cout << "true" << endl;
        else cout << "false" << endl;
        getline(cin, s);
    }
    // END YOUR EMPLEMENTATION [2]
    return 0;
}