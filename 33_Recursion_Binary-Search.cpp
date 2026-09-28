#include<iostream>
using namespace std;
bool sorted(int arr[],int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }else{
        return sorted(arr+1,size-1);
    }
}
int sum(int arr[],int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    return arr[0]+sum(arr+1,n-1);
}
bool linear(int arr[],int size,int k){
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }else{
        return linear(arr+1,size-1,k);
    }
}
int binery(int arr[],int s,int e,int k){
    if(s>e){
        return -1;
    }
    int mid=s+((e-s)/2);
    if(arr[mid]==k){
        return mid;
    }else if(arr[mid]>k){
        return binery(arr,s,mid-1,k);
    }else{
        return binery(arr,mid+1,e,k);
    }
}