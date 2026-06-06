#include<iostream>
#include<string.h>
using namespace std;

int nameLength(string name,int count){
    if(name[count]=='\0'){
        return count;
    }
    return nameLength(name,count+1);
}



int main(){
    string name="";
    getline(cin,name);
    int count=0;
    int len=nameLength(name,count);
    cout<<len<<endl;
}