#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int palindromecheck(string &A , int s, int e){
    if (s>=e)
        return 1;
    else if (A[s] != A[e])
       return 0;
    return palindromecheck(A , s+1, e-1);
}

int solve(string A) {
    if (A.length() == 0) return true;
    return palindromecheck(A, 0, A.size()-1);
}