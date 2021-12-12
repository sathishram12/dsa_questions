#include<vector>
#include<iostream>
using namespace std;

vector<int> solve(const vector<int> &A, int B) {
    vector <int>result;
    for (int i = 0; i < A.size(); i++){
        result.push_back(A[i]+B);
    }
    return result;
}