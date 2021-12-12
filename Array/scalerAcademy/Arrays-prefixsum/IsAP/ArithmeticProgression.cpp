#include<vector>
#include<iostream>
using namespace std;

int Solution::solve(vector<int> &A) {
    sort (A.begin(), A.end());
    for (int i = 1; i< A.size() -1; i++ ){
        if (A[i] - A[i-1] != A[i+1]-A[i])
            return 0;
    }
    return 1;
}