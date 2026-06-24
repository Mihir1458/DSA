// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
class Solution {
public:
       vector<int> bubbleSort(vector<int>& nums) {
     
        for(int i=nums.size()-1;i>=0;i--)
        {  int d=0;
           for(int j=0;j<=i-1;j++)
           {
               if(nums[j]>nums[j+1])
               {
                   
                   swap(nums[j],nums[j+1]);
                   d=1;
               }

           }
           if(d==0) // this executes when array is already sorted and this optimization
           {
               break;
           }
        }
        
        return nums;}
};
int main() {
    Solution p;
    
    vector <int> kim={75, 4, 478, 1, 1};
    vector <int> k=p.bubbleSort(kim);
    for(int i=0;i<k.size();i++)
    {
        cout<<k[i]<<" ";
    }
   
    return 0;
}