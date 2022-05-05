#include <iostream>
#include <string>

using namespace std;

int main()  {
    string str;
    getline(cin, str);

    int start = 0, max_len = 0;
    //Outer loop to keep extracting the substring 
    for(int i = 0; i < str.size(); i++){
        for(int j = i; j < str.size(); j++){
            int found = 1; //found palindrome

            //loop to check palindrome
            for(int k = 0; k < (j - i + 1) / 2; k++){ //k will act as a variable to run 2 pointer from start of substring and the end of substring until the middle of the substring
                if(str[i+k] != str[j-k])
                    found = 0; //if not found then we raise the flag and we won't update the longest length of palindrome
            }

            if(found && (j - i + 1) > max_len){ //if the previous palindrome was longer, there's no need to update
                max_len = j - i + 1;
                start = i; //update the starting point of the longest palindrome
            }
        }
    }

    cout << str.substr(start, max_len);
}