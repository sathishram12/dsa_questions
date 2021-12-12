#include<vector>
#include<iostream>
using namespace std;


vector<vector<int> > diagonal(vector<vector<int> > &A) {
    
    int n = A.size();
    int N = 2 * n - 1;
    vector <vector <int>> result(N);

    for (int i = 0; i < n; i++){
       for(int j = 0; j<n;j++ ){
           result[i+j].push_back(A[i][j]);
       }
    }
    for (int i =0; i < N; i++){
        while(result[i].size() !=n) result[i].push_back(0); 
    }
    return result;
}
