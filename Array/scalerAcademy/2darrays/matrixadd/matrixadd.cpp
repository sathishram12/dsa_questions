#include<vector>
#include<iostream>
using namespace std;

vector<vector<int> > Solution::solve(vector<vector<int> > &A, vector<vector<int> > &B) {
    vector<vector <int>> result; 
    
    if (A.size() != B.size()){
        return result;
    }
    
    for(int i=0; i < A.size(); i++) {
        vector<int> temp;
        for (int j =0; j < A[i].size(); j++){
            temp.push_back(A[i][j] + B[i][j]);
        }
        result.push_back(temp);
    }

    return result;
}
