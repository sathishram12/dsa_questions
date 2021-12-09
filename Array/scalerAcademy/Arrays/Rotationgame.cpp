/*Problem Description

You are given an integer array A and an integer B. You have to print the same array after rotating it B times towards right.

NOTE: You can use extra memory.



Problem Constraints

1 <= |A| <= 106

1 <= A[i] <= 109

1 <= B <= 109



Input Format

First line begins with an integer |A| denoting the length of array, and then |A| integers denote the array elements.
Second line contains a single integer B



Output Format

Print an array of integers which is the Bth right rotation of input array A, on a separate line.


Example Input

Input 1:

 4 1 2 3 4
 2

Input 2:

 3 1 2 2
 3



Example Output

Output 1:

 3 4 1 2

Output 2:

 1 2 2



Example Explanation

Explanation 1:

 [1,2,3,4] => [4,1,2,3] => [3,4,1,2]


Explanation 2:

 [1,2,2] => [2,1,2] => [2,2,1] => [1,2,2]
 */

#include<iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &A, int start, int end ){
    while (start < end){
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start++;
        end--;
    }
}

int main()  {
    int input;
    vector<int>input_array;
    int no_of_rotation;
    cin>>input;
    while (input--){
        int i;
        cin>>i;
        input_array.push_back(i);
    }   
    cin>> no_of_rotation;
  
    no_of_rotation %= input_array.size();
    reverseArray(input_array, 0,  input_array.size()-1);
    reverseArray(input_array, 0, no_of_rotation-1);
    reverseArray(input_array, no_of_rotation, input_array.size()-1);
   
    
    for(int i : input_array) {
        cout<< i<<' ';
    }
    return 0;
}