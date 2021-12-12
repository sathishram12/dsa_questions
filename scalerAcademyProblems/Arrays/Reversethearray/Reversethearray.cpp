#include<vector>
#include<iostream>
using namespace std;

vector<int> solve(const vector<int> &A) {
    vector<int> result;
    for (std::vector<int>::size_type i = A.size() ; i > 0; i-- ) {
        result.push_back(A[i-1]);
    }
    return result;
}