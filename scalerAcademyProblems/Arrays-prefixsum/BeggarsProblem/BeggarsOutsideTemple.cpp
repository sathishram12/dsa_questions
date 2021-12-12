#include<vector>
#include<iostream>
using namespace std;

vector<int> solve(int A, vector<vector<int> > &B) {
    vector<int>coins(A,0);
    for (int i = 0; i < B.size(); i++){
        int start = B[i][0]-1;
        int end = B[i][1] -1;
        int donation = B[i][2];
        coins[start ] += donation; 
        if ((end +1)< A) {
            coins[end + 1] -= donation;
        }
    }
    for (int i = 1; i < A; i++){
       coins[i] += coins[i-1];  
    }
    return coins;
}
