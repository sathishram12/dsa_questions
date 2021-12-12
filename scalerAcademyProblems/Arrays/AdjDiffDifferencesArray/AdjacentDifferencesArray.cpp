#include<vector>
#include<iostream>
using namespace std;

vector<int> solve(vector<int> &A) {
    vector<int> B;
    for (int i=0; i<A.size(); i++){
        B.push_back(A[i]-A[i-1])
    }
}