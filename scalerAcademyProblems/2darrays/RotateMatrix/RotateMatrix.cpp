#include<vector>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int> > &A) {
    int N= A.size();
    
    for (int x = 0; x < (N +1) / 2; x++) {
         for (int y = 0; y < N/2; y++) {
             int temp = A[N - 1 - y][x];
             A[N - 1 - y][x] = A[N - 1 - x][N - 1 - y];
             A[N - 1 - x][N - 1 - y] = A[y][N - 1 - x];
             A[y][N - 1 - x] = A[x][y];
             A[x][y] = temp;
         }
    }
}