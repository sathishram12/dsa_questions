#include<vector>
#include<iostream>
using namespace std;

int Solution::solve(vector<int> &A) {
    int minimum_val = INT_MAX;
    sort(A.begin(), A.end());
    
    for (int i =1; i < A.size(); i++) {
        if (abs(A[i]-A[i-1]) < minimum_val){
            minimum_val = abs(A[i]-A[i-1]);
        }

    }
    return minimum_val;
}
