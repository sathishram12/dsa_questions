#include<vector>
#include<iostream>
using namespace std;

int solve(string A) {
    int sum = 0;
    int count = 0;
    int len = A.size();
    for (int i=0 ; i < len; i++){
        if (count > 0 && A[i] == 'G'){
            sum +=count;
        }

        if (A[i] == 'A'){
            count++;
        }
    }
    return sum;
}