#include<vector>
#include<iostream>
using namespace std;

int solve(vector<int> &A) {
    
    int sum=0;
    int leftsum=0;

    for (int i = 0 ; i < A.size(); i++){
        sum +=A[i];
    }

    for (int j = 0; j < A.size(); j++){
        sum -=A[j];

        if (leftsum == sum){
            return j;
        }

        leftsum +=A[j]; 
    }
    return -1;
}