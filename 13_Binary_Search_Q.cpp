#include<iostream>
using namespace std;

// Problem statement
// You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
// Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.
// Note :
// 1. If ‘k’ is not present in the array, then the first and the last occurrence will be -1. 
// 2. 'arr' may contain duplicate elements.
// Example:
// Input: 'arr' = [0,1,1,5] , 'k' = 1
// Output: 1 2
// Explanation:
// If 'arr' = [0, 1, 1, 5] and 'k' = 1, then the first and last occurrence of 1 will be 1(0 - indexed) and 2.
//also find out that how many occurance are there

int first(int arr[],int s,int k){
    int start=0;
    int end=s-1;
    int ans=-1;
    while(start<=end){
        int mid=start+((end-start)/2);
        if(arr[mid]==k){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
int last(int arr[],int s,int k){
    int start=0;
    int end=s-1;
    int ans=-1;
    while(start<=end){
        int mid=start+((end-start)/2);
        if(arr[mid]==k){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}

// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
// Return the index of the peak element.
// Your task is to solve it in O(log(n)) time complexity.
// Example 1:
// Input: arr = [0,1,0]
// Output: 1
// Example 2:
// Input: arr = [0,2,1,0]
// Output: 1
// Example 3:
// Input: arr = [0,10,5,2]
// Output: 1
// Constraints:
// 3 <= arr.length <= 105
// 0 <= arr[i] <= 106
// arr is guaranteed to be a mountain array.

int peak(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        int mid=start+((end-start)/2);
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
    }
    return start;
}

int main(){
    int arr[10]={1,2,3,4,4,4,6,6,7,7};
    cout<<first(arr,10,4)<<endl;
    cout<<last(arr,10,4)<<endl;
    cout<<"total no of occurance are "<<(last(arr,10,4)-first(arr,10,4))+1<<endl;
    int arrr[4]={3,4,5,1};
    cout<<peak(arrr,4);
}