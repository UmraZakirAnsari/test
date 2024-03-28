#include<iostream>
using namespace std;
void double_value( int *a ,int size){
     if(size==0)
     return ;
    a[0]=a[0]*2;
    cout<<a[0]<<" ";
     double_value(a+1,size-1);

}
int main(){
    int n;
    cout<<"Enter the size of n: ";
    cin>>n;
    int arr[98];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<double_value(arr,n);
    return 0;
}