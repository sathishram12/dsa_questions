#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int solve(vector<int> &A) {
    sort (A.begin(), A.end());
    for (int i = 1; i< A.size() -1; i++ ){
        if (A[i] - A[i-1] != A[i+1]-A[i])
            return 0;
    }
    return 1;
}