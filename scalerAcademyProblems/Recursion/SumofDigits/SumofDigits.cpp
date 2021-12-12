#include<iostream>
#include<string>
using namespace std;

int solve(int A) {
    if (A==0)
        return A;
    else 
        return A%10 + solve(A/10);
}