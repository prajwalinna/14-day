#include<iostream>
using namespace std;

int sum(int arr[],int n){
    if(n<0){
        return 0;
    }
    return arr[n]+sum(arr,n-1);
}


int main(){
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the values of the array:\n"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=sum(arr,n-1);
    cout<<"The sum of the array is:\n"<<res<<endl;
}