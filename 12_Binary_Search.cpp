//Bonary Search

//condition-element should be in monotonic function
//take out middle and then either search in left or right


#include<iostream>
using namespace std;

int binary_search(int arr[],int size,int k){
    int start=0;
    int end=size-1;
    
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
int main(){
    int odd[5]={1,2,3,4,5};
    int even[6]={1,2,3,4,5,6};
    int n;
    cout<<"enter the key you want to find "<<endl;
    cin>>n;
    int size1 = sizeof(odd) / sizeof(odd[0]);
    cout<<binary_search(odd,size1,n)<<endl;
    int size2 = sizeof(even) / sizeof(even[0]);
    cout<<binary_search(even,size2,n)<<endl;
}