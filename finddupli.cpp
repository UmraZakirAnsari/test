#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count[n]={0};//  count array zero se initialize ho rhi h 
    for(int i=0;i<n;i++){
        int index=arr[i];
        count[index]++;
    }
    for(int i=0;i<n;i++){
        if(count[i]>=2){
            cout<<i<<" ";
        }

    }
    return 0;
}