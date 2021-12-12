#include<vector>
#include<iostream>
using namespace std;


vector<vector<int> > solve(vector<vector<int> > &A) {
    int row = A.size();
    int col = A[0].size();

    bool isCol = false;
    for (int i=0; i< row; i++) {
        if (A[i][0] == 0){
            isCol =true;
        }
        for (int j = 1; j < col ; j++) {
            if (A[i][j] == 0) {
                A[i][0] = 0;
                A[0][j] = 0;
            }
        }
    }
    
    for (int i=1; i< row; i++) {
        for (int j = 1; j < col ; j++) {
            if (A[i][0] == 0 || A[0][j] == 0) {
                A[i][j]  =0;
            }
        }
    }

    if (A[0][0] == 0) {
      for (int j = 0; j < col; j++) {
        A[0][j] = 0;
      }
    }
    
    if (isCol) {
      for (int i = 0; i < row; i++) {
        A[i][0] = 0;
      }
    }
    return A;
    
}
