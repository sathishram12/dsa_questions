#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string solve(string A) {
    int s = 0;
    int e = A.size() -1;

    while (s < e){
        A[s] ^= A[e];
        A[e] ^= A[s];
        A[s] ^= A[e];
        s++;
        e--;
    }
    return A;
}