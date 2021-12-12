#include<vector>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int T;
    int input;
    cin>>T;
    for (int t = 0; t<T ; t++){
       cin >> input;
       int j;
       int even =0;
       int odd = 0;
       for (int i= 0 ; i< input; i++){
           cin>>j;
           (j % 2 ==0) ? even++: odd++;
       }
       cout<<abs(even - odd)<<endl;
    }
  
    return 0;
}