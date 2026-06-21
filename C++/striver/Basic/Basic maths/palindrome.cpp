#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int n) {
         int r=0,k=n,t=n;
        while (n>0)
        {
            k=n%10;
            n=n/10;
            r=(r*10)+k;
            
        }
        if(r==t)
        {return true;}
        else {return false;}
        
    }
};