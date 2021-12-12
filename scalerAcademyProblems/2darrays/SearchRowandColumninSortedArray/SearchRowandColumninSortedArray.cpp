#include<vector>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(vector<vector<int> > &A, int B) {
    int n = A.size();
    int m = A[0].size();
    if (n==0 )return -1;

    if ((A[0][0] > B) || (A[n-1][m-1] < B))
       return -1;
    
    int i = 0, j = m - 1;
    int output=INT_MAX;
    while (i < n && j >= 0) 
    {
        if (A[i][j] == B) 
        {
            output = min(output, (((i+1)*1009)+j+1));
        }

        if (A[i][j] >= B) 
           j--;
        else 
           i++;
    }
    if (output == INT_MAX)
       return -1;
    else 
       return output;

}