#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0; 
        int j = height.size()-1;
        int area = 0;
        
        while (i<j){
            area = max (area, min(height[i], height[j]) * (j-i));
            if (height[i]<=height[j])
                i++;
            else 
                j--;
        }
        return area;
    }
};