// print numbers from 1 to 10 using recursion also print 10-1
#include <iostream>
using namespace std;

//to print 1 to 10 we use head recursion and for 10 to 1 we use tail recursion
void prnt(int n){
  if(n>0){
    prnt(n-1);
  }
  cout<<n<<" "<<endl;
  if(n==1){
    return;
  }
}
int main(){
  int n;
  cout<<"Enter the number"<<endl;
  cin>>n;
  prnt(n);
}