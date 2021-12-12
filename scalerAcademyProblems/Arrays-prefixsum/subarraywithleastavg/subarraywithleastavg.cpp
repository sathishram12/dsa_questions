#include<vector>
#include<iostream>
using namespace std;

int solve(vector<int> &A, int B) {
    int curr_sum = 0;
    int min_sum = 0;
    int res_index =0;
    for (int i=0;i<B; i++){
        curr_sum += A[i];
    }
    min_sum = curr_sum;
    for (int i=B;i<A.size(); i++){
        curr_sum += A[i] - A[i - B];
 
        if (curr_sum < min_sum) {
            min_sum = curr_sum;
            res_index = (i - B + 1);
        }     
    }
    return res_index;
}
