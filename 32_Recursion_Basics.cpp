#include<iostream>
using namespace std;

// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
// F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.
// Given n, calculate F(n).
int fibsum(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibsum(n-1)+fibsum(n-2);
}
// Problem statement
// You have been given a number of stairs. Initially, you are at the 0th stair, and you need to reach the Nth stair.
// Each time, you can climb either one step or two steps.
// You are supposed to return the number of distinct ways you can climb from the 0th step to the Nth step.
// Note:
// Note: Since the number of ways can be very large, return the answer modulo 1000000007.
int stairs(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    return stairs(n-1)+stairs(n-2);
}
//say digit for example 234=two three four
void say(int n){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n==0){
        return;
    }
    say(n/10);
    int n1=n%10;
    cout<<arr[n1];
    
}
int main(){
    int n;
    cout<<"enter a digit :";
    cin>>n;
    say(n);
}