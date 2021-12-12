#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;

int solve(vector<int> &A) {
    unordered_map<int,int> hashmap;
    int minDist = INT_MAX;
    for (int i = 0 ; i < A.size(); i++){
        if (hashmap.find(A[i]) == hashmap.end())
            hashmap[A[i]] = i;
        else if ( i - hashmap[A[i]] < minDist) {
            minDist = i - hashmap[A[i]];
        } 
    }
    if (minDist == INT_MAX)
        return -1;
    return minDist;
}