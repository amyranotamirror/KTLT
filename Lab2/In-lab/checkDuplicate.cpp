#include <bits/stdc++.h>
using namespace std;
bool checkDuplicate(int* ar,int size)
{
   if (size == 1) return true;
    if (*ar == *(ar + size - 1))
    {
        return false;
    }

    bool ret = 1;
    ret &= checkDuplicate(ar, size - 1);
    ret &= checkDuplicate(ar + 1, size - 1);
    return ret; 
}
int main(){
    int ar[5] = {4, 6, 10, 7, 5};
    cout << checkDuplicate(ar, 5);
}