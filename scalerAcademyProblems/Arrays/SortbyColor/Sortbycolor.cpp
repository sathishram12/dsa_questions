
#include<vector>
#include<iostream>
using namespace std;

vector<int> sortColors(vector<int> &A) {
    int n = A.size();
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    
    for (int i =0; i<n; i++){
        if (A[i] ==0) count0++;
        if (A[i] ==1) count1++;
        if (A[i] ==2) count2++;
    }
    
    for(int i=0; i<n; i++){
        if(i < count0)  A[i]=0;
        else if(i < count0+count1) A[i]=1;
        else A[i]=2;
    }

    return A;
}