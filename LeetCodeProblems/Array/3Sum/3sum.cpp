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