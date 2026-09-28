#include<iostream>
using namespace std;
// Problem statement
// You are given a string 'STR'. The string contains [a-z] [A-Z] [0-9] [special characters]. You have to find the reverse of the string.
// For example:
// If the given string is: STR = "abcde". You have to print the string "edcba".
// follow up:
// Try to solve the problem in O(1) space complexity. 
void reverse(string str,int i,int j){
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    reverse(str,i++,j--);
}
bool palindrome(string str,int i,int j){
    if(i>j){
        return true;
    }
    if(str[i]==str[j]){
        return palindrome(str,i++,j--);
    }else{
        return false;
    }
}
//o(logn)
int power(int m,int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return m;
    }
    int ans=power(m,n/2);
    if(n%2==0){
        return ans*ans;
    }else{
        return m*(ans*ans);
    }
}
void bubble_sort(int arr[],int n){
    if(n==0 || n==1){
        return;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubble_sort(arr,n-1);
}