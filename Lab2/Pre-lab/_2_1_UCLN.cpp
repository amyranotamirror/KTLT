#include<iostream>
#include<string>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

/* END of library */


int gcdRecursion(int p, int q)
{
    if (q != 0)
       return gcdRecursion(q, p % q); //switching position as we recursively call the function(making sure: left: higher, right: lower)
    else 
       return p; // reaching its base case when q==0 (the lower number == 0)
}

int gcdIteration(int p, int q)
{
    if(q == 0 || p == 0) return q+p; //limit

    while (p != q) {
        if (p > q)
            p = p - q; //take away the common element from the higher value
        else
            q = q - p; //take away the common element from the higher value
    }
    return p;//p==q then we can return any of them
}

int main()
{
    int p,q;
    cin>>p>>q;
    cout<<gcdRecursion(p,q)<< " "<<gcdIteration(p,q);
    return 0;
}