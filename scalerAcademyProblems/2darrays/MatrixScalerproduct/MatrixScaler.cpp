#include<vector>
#include<iostream>
using namespace std;

vector<vector<int> > solve(vector<vector<int> > &A, int B) {
   int row = A.size();
   int col = A[0].size();

   for (int i = 0; i < row; i++){
       for (int j = 0; j< col ; j++){
           A[i][j] *= B;
       }
   }
   return A;
}