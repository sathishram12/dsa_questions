
#include <stdio.h>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> s1;
        
        for (int i = 0 ; i < nums.size(); i++) {
            int temp = target - nums[i];
            if (s1.find(temp) == s1.end())
                s1[nums[i]]=i;
            else 
                return {s1[temp], i};
        }
        return result;
    }
};