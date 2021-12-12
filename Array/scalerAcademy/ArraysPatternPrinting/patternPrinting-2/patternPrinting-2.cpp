#include<vector>
#include<iostream>
using namespace std;
vector<vector<int> > Solution::solve(int A) {
    
    vector< vector< int > > ans(A);
    
    for(int i = 1; i <= A; i++) {
       for(int j = 1; j<=A-i; j++) 
            ans[i - 1].push_back(0);
        for(int j = i; j > 0; j--) 
            ans[i - 1].push_back(j);
    }
    return ans;
}
