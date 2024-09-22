// Given an integer array nums of unique elements, return all possible 
// subsets
//  (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

 

// Example 1:

// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
// Example 2:

// Input: nums = [0]
// Output: [[],[0]]
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void func(vector<int> nums, vector<vector<int>>& ans, vector <int> output, int index)
    {
      //basecase--> when the index is out of the bounf of nums, we push the contents of 
      //output into the array of output arrays, i.e. nums
        if(index >= nums.size())
        {
            ans.push_back(output);
            return;
        }
        //--> This function excludes the element on the index pointer from the subset
        func(nums, ans, output, index+1);
        //we create a variable that stores the value at which the pointer is currently at
        int x = nums[index];
        //then we push the vaklue into the array "output"
        output.push_back(x);
        //-->now this function will create a subset with the value included
        func(nums, ans, output, index+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        // -->creating vector of vctors as we need set of sets, lol
        vector<vector <int> > ans;
        //-->these wil be the vectors inside vector of vectors
        vector <int> output;
        int index = 0;
        func(nums, ans, output, index);
        return ans;
    }
};