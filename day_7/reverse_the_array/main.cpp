#include<iostream>
using namespace std;

//approach:1
/*
void reverse(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    swap(arr[start],arr[end]);
    return reverse(arr,start+1,end-1)
}
//1 2 3 4
//4 3 2 1 
*/
//approach 2:
void reverse(int arr[],int n,int i){
    if(i>=n-i-1){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    return reverse(arr,n,i+1);
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
    cout<<"Before Reverse"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    reverse(arr,n,0);
   cout<<"After Reverse"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}