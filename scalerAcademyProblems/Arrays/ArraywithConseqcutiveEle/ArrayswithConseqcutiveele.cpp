#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int solve(vector<int> &A) {
    int min = INT_MAX;
    int max = 0;
    sort(A.begin(), A.end());
    for (int i  = 1; i < A.size(); i++) {
        if (A[i] != A[i-1]+1){
            return 0;
        }
    }
    return 1;
}
