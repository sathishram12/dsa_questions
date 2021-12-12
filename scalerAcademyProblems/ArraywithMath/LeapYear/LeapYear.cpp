#include<vector>
#include<iostream>
using namespace std;

int solve(int A) {
    if (A% 400 == 0)
       return 1;
    else if (A%100 ==0 )
       return 0;
    else if (A%4 == 0)
       return 1;
    return 0;
}