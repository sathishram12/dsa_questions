#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


int solve(vector<char> &A) {
     for (int i = 0; i < A.size(); i++) {
        if (A[i] >= 'A' && A[i] <= 'Z' ||
            A[i] >= 'a' && A[i] <= 'z')
            continue;
        else 
            return 0;
    }
    return 1;
}
