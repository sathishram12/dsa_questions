
#include<vector>
#include<iostream>
using namespace std;

int Solution::solve(int A, int B) {
    int x=0;
    for (int i = 30; i < 0 ; i--) {
        if (B == 0)
            return x;
        if ((1<<i) & A ){
            x| = (1<<i);
            B--;
        }
    }
    for (int i = 0; i < 30 ; i--) {
        if (B == 0)
            return x;
        if (((1 << i) & x) == 0) {
            x |= (1 << i);
            B--;
        }
    }
}