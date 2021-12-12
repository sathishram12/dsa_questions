#include<vector>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> repeatedNumber(const vector<int> &A) {
    int xor1 = A[0];
    int n = A.size();
    vector<int> res(2,0);

    /* Get the xor of all array elements */ 
    for (int i = 1; i <n; i++)
        xor1 = xor1 ^ A[i];
    
    /* XOR the previous result with numbers from 1 to n*/
    for (int i = 1; i <= n; i++)
        xor1 = xor1 ^ i;
    
    int setbit=xor1 & (~(xor1-1));
    int x=0;
    int y=0;
    
    for(int i=0;i<n;i++){
       if(A[i]&setbit)
          x=x^A[i];
       else
          y=y^A[i];
       if((i+1)&setbit)
          x=x^(i+1);
       else 
          y=y^(i+1);
    }
    
    for(int i=0;i<n;i++){
       if(A[i]==x){
           res[0]=x;
           res[1]=y;
           break;
       }
       else if(A[i]==y){
            res[0]=y;
            res[1]=x;
            break;
       }
   }
   return res;
}
