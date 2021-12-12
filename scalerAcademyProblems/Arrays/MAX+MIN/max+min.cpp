#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int solve(vector<int> &A) {
    sort(A.begin(), A.end());
    return A[A.size()-1] + A[0];
}