#include<vector>
#include<iostream>
using namespace std;

int maxSubArray(const vector<int> &A) {
    int max_progress = 0;
    int max_final = INT_MIN;
    for (std::vector<int>::size_type i = 0; i < A.size(); i++){
        if (A[i] <= max_progress + A[i]){
            max_progress += A[i];
        } else {
            max_progress = A[i];
        }
        if (max_progress > max_final)
            max_final = max_progress;
    }
    return max_final;
}
