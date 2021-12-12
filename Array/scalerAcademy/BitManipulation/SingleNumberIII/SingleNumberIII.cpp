
#include<vector>
#include<iostream>
using namespace std;

vector<int> Solution::solve(vector<int> &A) {
    int var = 0
    for (auto &i: A) {
        var ^=i;
    }
    int mask = ((val & val -1)) ^ val; // get last bit
    int A = 0;
    int B = 0;
    for (auto x:A){
        if( x & mask)
            A ^= x;
        else 
            B ^= x;
    }
    int x = min(intA, intB), y = max(intA, intB);
    return vector < int > {x, y};
}