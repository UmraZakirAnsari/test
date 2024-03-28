#include<iostream>
using namespace std;
void prime(int num){
    if(num<2){
        return;
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            return;
        }
        cout<<num<<" ";
        return ;
        
    }
}
int main(){
    int arr[6];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        prime(arr[i]);
    }
    return 0;
}