#include<iostream>
using namespace std;

int fibonnaci(int n){
    if(n>1){
        return fibonnaci(n-1)+fibonnaci(n-2);
    }
    if(n==0||n==1){
        return n;
    }
}
//0 1 1 2 3 5 8
//for 3 => 0 1 1 
//for 5=> 0 1 1 2 3 5 8 13 21 
int main(){
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;
    for(int i=0;i<n;i++){
    cout<<fibonnaci(i)<<endl;
    }
}