#include<vector>
#include<iostream>
using namespace std;


vector<int> solve(vector<vector<int> > &A) {
    int row = A.size();
    int col = A[0].size();
    vector<int>result(col, 0);
    
    for (int i = 0; i < col; i++){
        for (int j =0; j < row; j++){
            result[i] +=A[j][i];
        }
    }
    return result;
}