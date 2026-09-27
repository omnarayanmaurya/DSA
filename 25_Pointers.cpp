#include<iostream>
using namespace std;
int main(){
    int num =5;
    cout<<"the value of num is: "<<num<<endl;
    int *n=&num;
    cout<<"the address of num is: "<<n<<endl;
    cout<<"the value of num is: "<<*n<<endl;
    cout<<"size of int :"<<sizeof(num)<<endl;
    cout<<"size of pointer :"<<sizeof(n)<<endl;
}