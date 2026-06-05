// Program to find the average of an array
#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"enter the number:"<<endl;
    cin>>n;
    int temp=n;

    int rev=0;
    while(temp!=0){
        int ld=temp%10;
        int cube=ld*ld*ld;
        temp=temp/10;
        rev=rev+cube;
    }
    if(rev==n){
        cout<<"armstrong number"<<endl;
    }
    else{
        cout<<"not armstrong number"<<endl;
    }
}

