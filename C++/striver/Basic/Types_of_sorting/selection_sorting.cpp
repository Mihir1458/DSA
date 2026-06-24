// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
class Solution {
public:
       vector<int> selectionSort(vector<int>& nums) {
     
        for(int i=0;i<nums.size()-1;i++)
        { int min=i;
           for(int j=i;j<nums.size();j++)
           {
               if(nums[j]>nums[min])
               {
                   min=j;
               }
               else{
                   swap(nums[j],nums[min]);
           }
           }}
        
        return nums;}
};
int main() {
    Solution p;
    
    vector <int> kim={5, 4, 4, 1, 1};
    vector <int> k=p.selectionSort(kim);
    for(int i=0;i<k.size();i++)
    {
        cout<<k[i];
    }
   
    return 0;
}