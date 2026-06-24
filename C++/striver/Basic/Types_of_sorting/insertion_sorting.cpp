// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
class Solution {
public:
       vector<int> insertionSort(vector<int>& nums) {
     
       for(int i=0;i<=nums.size()-1;i++)
        { 
           int j=i;
           while(j>0 && nums[j-1]>nums[j])
           {
               swap(nums[j-1], nums[j]);
               j--;
           }
        }
        
        return nums;}
};
int main() {
    Solution p;
    
    vector <int> kim={5, 4, 4, 1,7, 1};
    vector <int> k=p.insertionSort(kim);
    for(int i=0;i<k.size();i++)
    {
        cout<<k[i];
    }
   
    return 0;
}