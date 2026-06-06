#include<iostream>
using namespace std;
// bool isPlaindrome(string input,int left,int right){
//     if(left>=right){
//         return true;
//     }
//     if(input[left]!=input[right]){
//         return false;
//     }
//     return isPlaindrome(input,left+1,right-1);
// }
int isPlaindrome(int n,int rev){
    if(n==0){
        return rev;
    }
    int rem=n%10;
    rev=rev*10+rem;
    isPlaindrome(n/10,rev);
}

int main(){
    // string input="";
    // getline(cin,input);
    // cout<<boolalpha<<isPlaindrome(input,0,input.length()-1)<<endl;
    int n;
    cout<<"Enter the input number"<<endl;
    cin>>n;
    int rev=0;
    isPlaindrome(n,rev);
}