#include<iostream>
using namespace std;

// Problem statement 1
// You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
// Now the array is rotated at some pivot point unknown to you.
// For example, if 'arr' = [ 1, 3, 5, 7, 8], then after rotating 'arr' at index 3, the array will be 'arr' = [7, 8, 1, 3, 5].

// Now, your task is to find the index at which ‘k’ is present in 'arr'.
// Note :
// 1. If ‘k’ is not present in 'arr', then print -1.
// 2. There are no duplicate elements present in 'arr'. 
// 3. 'arr' can be rotated only in the right direction.
// Example:
// Input: 'arr' = [12, 15, 18, 2, 4] , 'k' = 2
// Output: 3
// Explanation:
// If 'arr' = [12, 15, 18, 2, 4] and 'k' = 2, then the position at which 'k' is present in the array is 3 (0-indexed).

int pivot(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        int mid=start+((end-start)/2);
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
    }
    return start;
}

int binary_search(int arr[],int start,int end,int k){
    
    while(start<=end){
        int mid=(start+((end-start)/2));
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

// Problem statement
// You are given a positive integer ‘n’.
// Your task is to find and return its square root. If ‘n’ is not a perfect square, then return the floor value of sqrt(n).
// Example:
// Input: ‘n’ = 7
// Output: 2
// Explanation:
// The square root of the number 7 lies between 2 and 3, so the floor value is 2.

int sqrt(int x){
    int s=0;
    int e=x-1;
    while(s<=e){
        int mid=s+((e-s)/2);
        if(mid*mid==x){
            return mid;
        }
        else if(mid*mid>x){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[8]={7,8,9,1,2,3,4,5};
    int n=8-1;
    int p=pivot(arr,8);
    int k,x;
    cout<<"pivot element is "<<p<<endl;
    cout<<"enter the element you want to find ";
    cin>>k;
    if(k>=arr[p]&&k<=arr[n]){
        cout<<binary_search(arr,p,n,k);
    }else{
        cout<<binary_search(arr,0,p-1,k);
    }
    cout<<"enter the no whose sqrt you want ";
    cin>>x;
    cout<<sqrt(x);
}