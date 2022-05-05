#include <bits/stdc++.h>
using namespace std;
void printPattern(int n)
{
	/*
	* STUDENT ANSWER
	*/
	cout << n;
	if(n>0) {
		cout << " ";
		printPattern(n-5);
		cout << " " << n;
	}
}
int main(){
	printPattern(16); // 16 11 6 1 -4 1 6 11 16
}