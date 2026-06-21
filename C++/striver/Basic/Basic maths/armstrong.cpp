#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isArmstrong(int n) {
int k=n,sum=0;
while(n>0)
{
    int t=n;
    t=n%10;
    n=n/10;
    sum=pow(t,3)+sum;

}
if(sum==k)
{
    return true;

}
else return false;
    }
};