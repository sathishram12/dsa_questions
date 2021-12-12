#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
#include<unordered_set>
using namespace std;

int solve(vector<int> &A) {
    long long int ps =0;
    unordered_set<long> s1;

    for (int i = 0; i < A.size(); i++){
        ps += A[i];
        if ( ps == 0 || s1.find(ps) != s1.end()) 
            return 1;
        else 
            s1.insert(ps);
    }
    return 0;    
}
