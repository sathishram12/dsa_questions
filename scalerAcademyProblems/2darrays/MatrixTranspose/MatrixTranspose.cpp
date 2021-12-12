#include<vector>
#include<iostream>
using namespace std;

vector<vector<int> > solve(vector<vector<int> > &A) {
    int row = A.size();
    int col = A[0].size();
    
    vector<vector<int>> result;
    for (int i = 0; i < col; i++){
        vector<int> temp ; 
        for (int j =0; j < row; j++) {
           temp.push_back(A[j][i]);
        }
        result.push_back(temp);
    }
    return result;
}
