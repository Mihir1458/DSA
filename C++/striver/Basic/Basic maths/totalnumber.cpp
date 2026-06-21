#include <bits/stdc++.h>
using namespace std;
int countDigit(int n) {
       int k=n,sum=0;
       while(k!=0)
       { 
        
          sum++;
        k=(k/10);
            
        
       }
       return sum;
    }
int main()
{
    int n;
    cin>>n;
    cout<<countDigit(n);
}