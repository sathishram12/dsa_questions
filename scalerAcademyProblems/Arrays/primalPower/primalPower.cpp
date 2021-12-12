#include<vector>
#include<iostream>
using namespace std;

bool isprime (int no){
    if (no % 2 == 0 || no % 3 == 0){
        return false;
    }

    //By using primality test
    for (int j = 5 ; j * j <= no; j +=6){
        if (no % j == 0 || no % (j +2) == 0){
            return false;
        }
    }
    return true;
}

int solve(vector<int> &A) {
    int count = 0;

    for (int i=0; i < A.size(); i++ ){
        if (A[i]>1 ){
            if (isprime(A[i]) || A[i]<=3 ){
                count++;
            }    
        }
    }
    return count;
}