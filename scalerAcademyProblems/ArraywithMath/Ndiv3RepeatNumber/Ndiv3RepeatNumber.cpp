
#include<vector>
#include<iostream>
using namespace std;

int repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int freq1 = 0;
    int freq2 = 0;
    int N = A.size();
    int maj1 = 0;
    int maj2 = 0;
    
    for (int i=0; i<N; i++){
        if (maj1 == 0){
            maj1 = A[i];
            freq1 = 1;
           
        } else if (maj1 == A[i]){
            freq1 += 1; 
        } else if (maj2 == 0) {
            maj2 = A[i];
            freq2 = 1;
        } else if (maj2 == A[i]){
            freq2 += 1; 
        } else {
            freq1 -= 1;
            freq2 -= 1;
            if (freq1 == 0) 
                maj1 =0;
            if (freq2 == 0) 
                maj2 =0;
        }
    }
   
    freq1 = 0;
    freq2 = 0;
    for (int i=0; i < N; i++){
        if (A[i] == maj1)
            freq1++;
        else if (A[i] == maj2)
            freq2++;    
    }
    if (freq1 > (floor(N/3))){
        return maj1;
    } 
    if (freq2 > (floor(N/3))){
        return maj2;
    }
    return -1;
}
