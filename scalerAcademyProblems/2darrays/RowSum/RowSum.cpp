
#include<vector>
#include<iostream>
using namespace std;

vector<int> solve(vector<vector<int> > &A) {
    int row = A.size();
    int col = A[0].size();

    vector<int> result(row,0);
    for (int i = 0;i < row; i++){
        for (int j =0;j < col ; j++){
            result[i] += A[i][j];
        }
    }
    return result;
}