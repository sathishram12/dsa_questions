#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

vector<char> Solution::to_lower(vector<char> &A) {
    for (int i = 0; i< A.size(); i++){
        if (A[i] >= 'A' && A[i] <='Z')
            A[i] ^=32;
    }
    return A;
}
