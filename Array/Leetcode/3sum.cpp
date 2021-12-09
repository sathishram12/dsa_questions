/* 15. 3Sum
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]

Example 2:

Input: nums = []
Output: []

Example 3:

Input: nums = [0]
Output: []

 

Constraints:

    0 <= nums.length <= 3000
    -105 <= nums[i] <= 105

*/


#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> output;
        if (nums.size() < 3)
            return output;
        
        sort(nums.begin(), nums.end());
        
        if (nums[nums.size()-1] <0 )
            return output;
        
        for (int i =0 ; i < nums.size() -2; i++){
            int x = nums[i];
            int l = i+1;
            int r = nums.size() -1;
            
            if (x > 0 )
                return output;
            
            while (l<r)
            {
                if (x+ nums[l]+nums[r] == 0) {
                   output.push_back({x,nums[l], nums[r]});
                   while(l<r && nums[l] == nums[l+1]) l++;
                   while(l<r && nums[r] == nums[r-1]) r--;
                   l++;
                   r--;
                }
                else if (x+nums[l]+nums[r] < 0)
                    l++;
                else 
                    r--;
            }
            while (i+1 < nums.size() && nums[i+1] == nums[i])
                ++i;
        }
        return output;
    }
};