#include<vector>
#include<iostream>
using namespace std;

int LCM(int A, int B) {
    long max=(A>B)?A:B;
    int ans =max;
    while (max%A != 0 || max%B != 0)
        max += ans;
    return max;
}
