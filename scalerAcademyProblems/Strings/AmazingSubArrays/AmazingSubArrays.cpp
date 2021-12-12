#include<vector>
#include<iostream>
#include<string>
using namespace std;
int solve(string A) {

    int count = 0;
    for (int i = 0 ; i < A.size(); i++){
        if (A[i] == 'A'|| A[i] == 'E' || A[i] == 'I' || A[i] == 'O'|| A[i] =='U' ||
            A[i] == 'a'|| A[i] == 'e' || A[i] == 'i' || A[i] == 'o'|| A[i] =='u') {
                count  += (A.size() -i);
            }
    }
    return count % 10003;
}