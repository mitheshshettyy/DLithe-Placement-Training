// Program to find the average of an array

#include <iostream>
using namespace std;

int main(){
    int n;
    int arr[100];
    int sum=0;

    cout<<"enter the no of elements:"<<endl;
    cin>>n;

    cout<<"enter elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    float avg=sum/n;

    cout<<"average of array:"<<endl;
    cout<<avg;
}

