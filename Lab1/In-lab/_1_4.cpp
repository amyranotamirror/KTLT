#include <iostream>
#include <cstring>
using namespace std;

void printFirstRepeatedWord(char str[]) {
    int n_words = 0, pos = 1;
    //Counting number of words
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == ' ') n_words++;
    }

    if (n_words == 0) {
        cout << "No Repetition"; //Cases when there's no space to separate words => No rep
        return;
    }

    n_words++; //Since we initialize number of words to 0, we need to increase it by 1 as regard to the first word before a ' '
    int places[n_words]; //array size of number of words storing address
    places[0] = 0; //first word is located at 0
    //Store places where each word starts
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == ' ') places[pos++] = i + 1;
    }

    int done = 0;//found repetition?

    //loop to find the first repeated word
    for(int i = 0; i < n_words - 1; i++){ //i never reach the last word
        for(int j = i+1; j < n_words; j++){ //let j reach the last word
            char *p1 = &str[places[i]], *p2 = &str[places[j]]; //pointer to begining of each word to compare

            while(*p1 && *p2 && *p1 == *p2 && *p1 != ' ' && *p2 != ' ') { //comparing while true
                p1++; p2++;
            }

            if(*p1 == ' ' && !isalpha(*p2)){ //when the word (i) reach its end, if the word (j) is not a blankspace nor endofword => this is not a matching word
                //if j is the last word, we limit it with strlen; otherwise, limit it with the next word 
                for(int index = places[j]; index < strlen(str)*(n_words-1 == j) + (places[j+1])*(n_words-1 != j); index++){
                    cout << str[index]; //print the result
                }
                done = 1; //done and escape
                break;
            }
        }
        if(done == 1) break; //done and escape
    }
    if(done == 0) //No repetition found
        cout << "No Repetition";
}

int main(){
    char str[] = "car taxi bike bike car taxi" ;
    printFirstRepeatedWord(str);
}