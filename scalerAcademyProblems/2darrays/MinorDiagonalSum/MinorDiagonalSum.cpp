#include<vector>
#include<iostream>
using namespace std;

int solve(const vector<vector<int> > &A) {
    int N = A.size();

    int result;
    for (int i = 0; i < N; i++){
        result += A[i][N-i-1];
    }

    return result;
}
