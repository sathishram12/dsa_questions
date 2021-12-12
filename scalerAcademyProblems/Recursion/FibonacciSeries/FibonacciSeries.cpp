#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int findAthFibonacci(int A) {
    if (A == 0 )
        return 0;
    if (A == 1)
        return 1;
    else 
        return findAthFibonacci(A-1) + findAthFibonacci(A-2);
}