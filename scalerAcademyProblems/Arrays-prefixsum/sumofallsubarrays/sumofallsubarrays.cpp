#include<vector>
#include<iostream>
using namespace std;

long Solution::subarraySum(vector<int> &A) {
    long sum = 0;
    long len = A.size();
    for (int i = 0; i < len; i++ )
       sum += A[i] *( (i+1) * (len-i));
    return sum;
}