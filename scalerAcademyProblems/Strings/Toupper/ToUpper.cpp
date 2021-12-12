#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

vector<char> to_upper(vector<char> &A) {
    for (int i = 0 ; i < A.size(); i++) {
        if (A[i] >= 'a' && A[i] <= 'z' )
            A[i] ^= abs('a'- 'A');
    }
    return A;
}