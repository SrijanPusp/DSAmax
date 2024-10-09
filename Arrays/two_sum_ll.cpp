// 
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int end = numbers.size();
        int i=0; 
        int j=end-1;
        while(i<j)
            {
                if(numbers[i]+numbers[j]==target)
                {
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    return ans;
                }
                else if(numbers[i]+numbers[j]>target)
                {
                    j--;
                }
                else
                {
                    i++;
                }
            }
        return ans;
    }
};