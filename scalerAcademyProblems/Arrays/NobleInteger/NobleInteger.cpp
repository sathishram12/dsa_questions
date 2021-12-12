#include<vector>
#include<iostream>
using namespace std;

int Solution::solve(vector<int> &A) {
    int size = A.size();
    sort(A.begin(), A.end(),greater<int>());
    if(A[0] == 0){
        return 1;
    }
    for (int i = 1; i < size; i++){
        if (A[i] > 0 && A[i] != A[i-1] && A[i]==i)
            return 1;
    }
    return -1;
}
