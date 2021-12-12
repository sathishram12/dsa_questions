#include<vector>
#include<iostream>
using namespace std;

int solve(const vector<vector<int> > &A) {
    int N = A.size();

    int sum = 0;
    for (int i =  0; i < N; i++){
        sum += A[i][i];
    }
    return sum;
}