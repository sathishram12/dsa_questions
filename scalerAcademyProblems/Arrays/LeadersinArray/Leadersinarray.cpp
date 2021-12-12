#include<vector>
#include<iostream>
using namespace std;


vector<int> Solution::solve(vector<int> &A) {
    int size = A.size();
    int max_from_right =  A[size-1]; 
  
    vector<int>ans;
    /* Rightmost element is always leader */
    ans.push_back(arr[size-1]);
    
    for (int i = size-2; i >= 0; i--) 
    { 
        if (max_from_right < arr[i]) 
        {            
            max_from_right = arr[i];
            ans.push_back(max_from_right);
        } 
    }
    return ans;
}