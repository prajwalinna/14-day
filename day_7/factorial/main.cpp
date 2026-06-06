#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;
    int res=factorial(n);
    cout<<"Factorial of "<<n<<" is "<<res<<endl;
}