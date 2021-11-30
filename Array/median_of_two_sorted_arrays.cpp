/* 4.median of two sorted arrays
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

Example 3:

Input: nums1 = [0,0], nums2 = [0,0]
Output: 0.00000

Example 4:

Input: nums1 = [], nums2 = [1]
Output: 1.00000

Example 5:

Input: nums1 = [2], nums2 = []
Output: 2.00000
*/

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m1 = 0;
        int m2 = 0;
        int i = 0;
        int j =0;
        if ((nums1.size() + nums2.size())%2 == 1){
            for (int k =0; k <=(nums1.size() + nums2.size())/2; k++) 
            {
                if (i != nums1.size() && j != nums2.size())
                    m1 = nums1[i] < nums2[j] ? nums1[i++] : nums2[j++];
                else if (i < nums1.size())
                    m1 = nums1[i++];
                else
                    m1 = nums2[j++];
            }
            return m1;
            
        } else {
            for (int k =0; k <= (nums1.size() + nums2.size())/2; k++) 
            {
                m2=m1;
                if (i != nums1.size() && j != nums2.size())
                    m1 = nums1[i] <nums2 [j] ? nums1[i++] : nums2[j++];
                else if (i < nums1.size())
                    m1 = nums1[i++];
                else
                    m1 = nums2[j++];
            }
            return (float)(m2+m1)/2;
        }
    }
};