#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int solve(int A) {
    if (A == 1)
        return 1;
    else 
        return  A * solve(A-1);
}