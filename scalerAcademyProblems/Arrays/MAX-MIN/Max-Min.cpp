#include<vector>
#include<iostream>
using namespace std;

int solve(vector<int> &A, int B) {
    if (B > A.size()){
        return 0;
    }
    sort(A.begin(), A.end());
    int start = B-1;
    int last = A.size()-B;
    return A[last] - A[start];
}