#include<vector>
#include<iostream>
using namespace std;

int Solution::solve(vector<int> &A) {
      int n=A.size();
      int val=0;
      for(int i=0;i<n;i++)
      {
        val=max(val,A[i]);
      }
      int ans=0;
      for(int i=0;i<n;i++)
      {
        ans+=val-A[i];
      }
      return ans;
}