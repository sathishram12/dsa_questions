

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