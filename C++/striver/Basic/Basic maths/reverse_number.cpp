#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverseNumber(int n) {
            int r=0,k=n;
        while (n>0)
        {
            k=n%10;
            k=n/10;
            r=(r*10)+k;
            
        }
            return r;
        
    }
};