#include<vector>
#include<iostream>
using namespace std;

int solve(const vector<vector<int> > &A) {
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A[i].size(); j++)
        {
           if (j > i && A[i][j] != 0){
               return 0;
           }
        }   
    }
    return 1;