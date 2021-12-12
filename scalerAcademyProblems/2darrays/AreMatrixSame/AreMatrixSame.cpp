#include<vector>
#include<iostream>
using namespace std;

int solve(vector<vector<int> > &A, vector<vector<int> > &B) {
    if (A.size() != B.size() || A[0].size() != B[0].size()) {
        return 0;
    }

    for (int i = 0; i<A.size(); i++){
        for (int j =0; j<A[0].size(); j++){
            if (A[i][j] != B[i][j]){
                return 0;
            }
        }
    }
    return 1;
}