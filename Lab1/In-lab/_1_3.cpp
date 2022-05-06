#include <iostream>
#include <cstring>
using namespace std;

void process(const char *name, char *outstr);
int main(){
    char str[] = "  rober)(t *Xio*  JAMES B(ON#D  ^&*@ A " ;
    char *outstr = new char[strlen(str) + 1];
    process(str, outstr);
    cout << outstr;
}
void process(const char *name, char *outstr) {
    if(strlen(name) == 0) return;

    //While the original s-tring is constant we have to use a constant pointer
    char const *f = &name[0];
    while((*f == ' ' || !isalpha(*f)) && *f) f++; //find the first place that starts with a letter
    if (!*f) return; //empty s-tring (no name inside)

    int index = 0, space = 0;
    //Saving the new s-tring to outs-tring
    for(; *f; f++){
        if(isalpha(*f) || space == 0 && *f == ' ') {//nonspace character or first single space before each alphabetical character
            if(*f == ' ') {
                space = 1; //flag this everytime we get a single space
                outstr[index++] = *f;//Simply append this into the new s-tring
            } 
            else if(space == 1){
                space = 0; //return this to 0 everytime we encounter a letter after a series of special characters/space
                outstr[index++] = char(toupper(*f));//Letter after space will be uppercase
            } 
            else outstr[index++] = char(tolower(*f));//Others will be lowercase
        }
    }
    outstr[0] = char(toupper(outstr[0]));//change the first character to be uppercase

    //Eliminate last space or special character
    int j = strlen(outstr) - 1;
    while(!isalpha(outstr[j])) j--;
    outstr[++j] = '\0';
}