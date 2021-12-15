// // This is the interface that allows for creating nested lists.
// // You should not implement it, or speculate about its implementation
class NestedInteger {
    public:
      NestedInteger(int x) {
        int integer = x;
      }
      // Return true if this NestedInteger holds a single integer, rather than a nested list.
      bool isInteger() {
      }

      // Return the single integer that this NestedInteger holds, if it holds a single integer
      // The result is 1e9 if this NestedInteger holds a nested list
      int getInteger() {
      }

      // Return the nested list that this NestedInteger holds, if it holds a nested list
      // The result is an empty vector if this NestedInteger holds a single integer
      vector<NestedInteger> &getList() {
      }
  };
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;


class NestedIterator {
    vector<int> output;
    int i = 0;
public:
    void solve (vector<NestedInteger> &nestedList, NestedInteger it ) {
        if(it.isInteger()) {
            output.push_back(it.getInteger());
        } else {
            for (NestedInteger m:it.getList()){
                solve(it.getList(),m);
            }
        }
    }
    NestedIterator(vector<NestedInteger> &nestedList) {
        output.clear();
        for (NestedInteger it : nestedList){
            solve(nestedList,it);
        }
    }
    
    int next() {
        int ans = output[i];
        i++;
        return ans;
    }
    
    bool hasNext() {
        return i!=output.size();
    }
};