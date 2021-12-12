#include<vector>
#include<iostream>
using namespace std;

int majorityElement(const vector<int> &A) {
    int freq = 0;
    int N = A.size();
    int maj = 0;
    
    for (int i=0; i<N; i++){
        if (maj == 0){
            maj = A[i];
            freq = 1;
        } else if (maj == A[i]){
            freq += 1; 
        } else {
            freq -= 1;
            if (freq == 0) {
                maj =0;
            }
        }
    }
    int cnt = 0;
    for (int i =0; i < N; i++){
        if (A[i] == maj)
            cnt++;
    }
    if (cnt > (floor(N/2))){
        return maj;
    }
    return 0;
}
