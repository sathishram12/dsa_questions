
#include<vector>
#include<iostream>
using namespace std;

int solve(int A, int B, int C, int D, int E, int F, int G, int H) {
    return !(A>=G || C<=E || D<=F || B>=H);
}