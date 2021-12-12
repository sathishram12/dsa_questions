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