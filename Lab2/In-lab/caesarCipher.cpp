#include <bits/stdc++.h>
using namespace std;

void encrypt(char* text, int shift) {
    // Write your code
    if(shift < 0){
        shift = (-(-shift) % 26); //shift <= -26 then we change it to a value in -26 <= shift <= 0
        shift += 26; //get the value 0 <= shift <= 26
    }
    else if(shift >= 26)
        shift %= 26;


    int i = 0;
    while(text[i] != 0){//loop through each character
        int temp = text[i] + shift; //character after shift (might exceed "z" or "Z")
        if(text[i] <= 'z' && temp > 'z' || text[i] <= 'Z' && temp >'Z')
            temp -= 26;

        text[i] = temp;
        i++;
    }

}

void decrypt(char* text, int shift) {
    // Write your code 
    if(shift < 0){
        shift = (-(-shift) % 26); //shift <= -26 then we change it to a value in -26 <= shift <= 0
        shift -= 26;
    }
    else if(shift >= 26)
        shift %= 26;

    int i = 0;
    while(text[i] != 0){
        int temp = text[i] - shift;
        if(text[i] >= 'a' && temp < 'a'|| text[i] >= 'A' && temp <'A')
            temp += 26;
        text[i] = temp;
        i++;
    }
}
int main(){
    int n, shift; 
    cin >> n >> shift;
    char* text = new char[n+1];
    for(int i = 0; i < n; i++) cin >> text[i];
    text[n] = 0;

    encrypt(text, shift);
    cout << text << '\n';
    decrypt(text, shift);
    cout << text;

    delete[] text;
}