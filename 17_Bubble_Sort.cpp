// Problem statement
// You are given ‘N’ integers in the form of an array ‘ARR’. Print the sorted array using the insertion sort.
// Note :
// No need to return anything. You should sort the array in-place.
// For example :
// Let ‘ARR’ be: [1, 4, 2]
// The sorted array will be: [1, 2, 4].


#include<iostream>
using namespace std;
void insertion_sort(int arr[] ,int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(j;j>=0;j--){
            if(temp<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j]=temp;
    }
}