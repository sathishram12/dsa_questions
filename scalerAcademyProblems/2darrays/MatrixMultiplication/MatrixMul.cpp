#include<vector>
#include<iostream>
using namespace std;

vector<vector<int> > solve(vector<vector<int> > &A, vector<vector<int> > &B) {
    vector<vector <int>> result;
    
    if (A[0].size() != B.size()){
        return result;
    }
    int m = A.size();
    int n = A[0].size();
    int p = B[0].size();


    for (int i = 0; i < m; i++) {
        vector<int> temp (p,0);
        for (int j =0; j < p; j++){
            for (int k =0; k < n; k++){
                temp[j] += A[i][k] * B[k][j];
            }
        }
        result.push_back(temp);
    }
    return result; 

}