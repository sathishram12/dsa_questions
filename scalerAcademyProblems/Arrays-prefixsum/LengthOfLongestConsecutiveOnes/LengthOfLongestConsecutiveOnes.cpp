#include<vector>
#include<iostream>
using namespace std;

int solve(string A) {
    int n = A.length();
    int max_cnt_one = 0;
    int total_cnt_one=0;
    int temp = 0;
    vector<int> left(n,0);
    vector<int> right(n,0);

    left[0] = A[0] - 48;
    right[n-1] = A[n-1] - 48;

    for (int i = 1; i < n; i++) {
        if (A[i] == '1')
            left[i] = left[i - 1] + 1;
        else
            left[i] = 0;
    } 
    for (int i = n - 2; i >= 0; i--) {
        if (A[i] == '1')
            right[i] = right[i + 1] + 1;
 
        else
            right[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        if (A[i] == '1') {
            total_cnt_one++;
            temp++;
        }
        else {
            max_cnt_one = max(temp, max_cnt_one);
            temp = 0;
        }
    }

    max_cnt_one = max(temp, max_cnt_one);

    for (int i = 1; i < n - 1; i++) {
        if (A[i] == '0') {
            int sum = left[i - 1] + right[i + 1];
 
            if (sum < total_cnt_one)
                max_cnt_one = max(max_cnt_one, sum + 1);
 
            else
                max_cnt_one = max(max_cnt_one, sum);
        }
    }
    return max_cnt_one;

}