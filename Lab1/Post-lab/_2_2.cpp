//find the length of a longest string without repeated characters
#include <iostream>
#include <string>

using namespace std;

int main()  {
    string s = "";
    getline(cin, s);//userInput

    int gloMax = 0;
    for(int i = 0; i < s.size(); i++){
        //Initialise our finding practice
        string temp = s.substr(i+1); //take the substring by eliminating the first char
        int position = temp.find(s[i]), counter = 1; //position of the repeated letter from the new substring

        if(position != string::npos) //if we found it somewhere, limit the substring up until that point
            temp = temp.substr(0, position);

        //Inner loop to check for the longest string
        while(position != 0 && !temp.empty() && temp != "\0"){ //the character found is not next to it nor the substring is empty
            char finder = temp[0];//the letter to find
            temp = temp.substr(1);//substring to look at
            position = temp.find(finder);//the position where we found the letter

            if(position != string::npos)
                temp = temp.substr(0, position);
            counter++;
        }
        gloMax = max(gloMax, counter);
    }
    std::cout << gloMax;
}