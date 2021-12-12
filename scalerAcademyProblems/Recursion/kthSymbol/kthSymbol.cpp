#include<vector>
#include<iostream>

using namespace std;

int solve(int A, int B) {
    if (A == 1)
        return 0;
    int previousNumber = solve(A-1, B/2 + B%2);
    if (previousNumber == 1)
        return (B%2 == 1 ? 1 : 0);
    else 
        return (B%2 == 1 ? 0 : 1);
}