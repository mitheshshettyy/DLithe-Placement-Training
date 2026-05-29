//Program to find wheather given number is palindrome or not
#include <iostream>
using namespace std;

int main(){
    int n;
    int rev=0;

    cout<<"enter the number:"<<endl;
    cin>>n;

    int temp=n;
    
    while(temp!=0){
        int ld=temp%10;
        rev=rev*10+ld;
        temp/=10;
    }
    
    if(rev==n){
        cout<<"palindrome number";
    }else{
        cout<<"not a palindrome number";
    }
}

