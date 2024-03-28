#include<iostream>
using namespace std;
void double_array(int *a ,int size){
    //*a and a[] is same (a ek pointer hai )
    // for 2D array (*a)[] and a[][]  is same ( a ek pointer h jo 2D array ka address store karta h )
    for(int i=0;i<size;i++)
        a[i]=a[i]*2;
    
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
 double_array(arr,n);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   return 0;
}
    