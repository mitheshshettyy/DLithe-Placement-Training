//Program to find the largest element in an array
#include <iostream>
using namespace std;

int main(){
    int n;
    int arr[20];
    int largest=INT16_MIN;

    cout<<"enter the no of elements:"<<endl;
    cin>>n;

    cout<<"enter elements:"<<endl;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]>largest) largest=arr[i];
    }
    
    cout<<largest;
}

