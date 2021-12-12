#include<vector>
#include<iostream>
using namespace std;

vector<vector<int> > generateMatrix(int A) {
     
    vector<vector<int>> result(A, vector<int> (A, 0));

    int T =0;
    int L =0;
    int k =0;
    int i =1;
    int R =A-1;
    int B =A-1;
    
    while (T <= B ||  L <= R  ) {
        for (int k =L ; k <= R; k++)
            result[T][k] = i++;
        T++;
        for (int k =T ; k <= B; k++)
            result[k][R] = i++;
        R--;
        for (int k=R ; k>=L ; k--)
            result[B][k] = i++;
        B--;
        for (int k=B; k>=T; k--)
            result[k][L] = i++;
        L++;
    }
    return result;

}