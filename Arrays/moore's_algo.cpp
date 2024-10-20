// 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int count = 0, count2 = 0;
       int ans;
       int n= nums.size();
       for(int i=0; i<n; i++)
       {
            if(count==0)
            {
                ans = nums[i];
            }
            if(ans == nums[i])
            {
                count++;
            }
            else 
            {
                count--;
            }
       }
       for(int i=0; i<n; i++)
       {
         if(ans==nums[i])
         {
            count2++;
         }
       }
       if(count2>n/2)
       {
        return ans;
       }
       return -1;
    }
};