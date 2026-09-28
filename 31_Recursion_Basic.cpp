#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}
int power(int m,int n){
    if(n==1){
        return m;
    }
    return m*power(m,n-1);
}
int count(int n){
    if(n==0){
        return;
    }
    count(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"enter any integer: ";
    cin>>n;
    cout<<"factorial of "<<n<<" is: "<<factorial(n)<<endl;
}