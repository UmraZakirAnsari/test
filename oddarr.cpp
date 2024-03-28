#include<iostream>
using namespace std;
int main(){
    int arr[6];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 cout<<"Odd elements in array is :";
    for(int i=0;i<n;i++){
        if(arr[i]%2==1||arr[i]%2==-1){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}