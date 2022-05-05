#include <bits/stdc++.h>
using namespace std;
void mostFrequentCharacter(char* str, char& res, int& freq);
int main(){
    string s = "AAZhakkjdsjjgBbakKqkibbbgh";
    char *str = &s[0];
    char res = 0;
    int freq = 0;
    mostFrequentCharacter(str, res, freq);
    cout << res << ' ' << freq;

}
void mostFrequentCharacter(char* str, char& res, int& freq) {
    if(!*str) return; //Empty string
    // Write your code
    int appear[26];//Storing frequency

    //Reset frequency
    for(int i = 0; i < 26; i++){
        appear[i] = 0;
    }
    
    for(; *str; str++){
        if(*str < 65 || *str > 122 || (*str > 90 && *str < 97)) continue;//not char
        
        //Position in the alphabet
        int place = *str - 65*(*str >= 'A' && *str <= 'Z') - 97*(*str >= 'a' && *str <= 'z');
        appear[place]++;//Incrementing frequency

        //Updating freqency
        bool condition = appear[place] > freq;
        freq = freq*(!condition) + appear[place]*(condition);
    }
    
    //Set res 
    res = 26;
    for(int i = 0; i < 26; i++){
        bool condition = (i < res) && (appear[i] == freq);//condition to update res
        res = res*(!condition) + i*(condition);
    }
    res += 97;//Lowercase
    
    //Check for non-char result
    bool condition = (res < 65 || res > 122 || (res > 90 && res < 97));
    res = res*(!condition) + 0*(condition);
    freq = freq*(!condition) + 0*(condition);
}