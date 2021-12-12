#include<vector>
#include<iostream>
using namespace std;

int Solution::solve(const vector<int> &A) {
    int ans =0;
    for (int i  = 0; i < A.size(); i++) {
        for (int j= i+1; j < A.size(); j++) {
            if (A[i] == A[j]){
                ans++;
                break;
            }
        }
    }
    return ans;
}