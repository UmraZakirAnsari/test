#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[43];
    cout<<"Enter the size of array: ";
     cin>>n;
     cout<<"Enter the element of array: ";
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     int num=arr[n-1];
     cout<<"Rotated array is: ";
     for(int i=n-2;i>=0;i--){
        
        arr[i+1]=arr[i];
     
     }
     arr[0]=num;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}