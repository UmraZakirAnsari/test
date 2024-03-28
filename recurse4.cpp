#include<iostream>
using namespace std;
int search( int *a ,int size,int key){
     if(size==0)
     return 0;
    if(a[0]==key)
    return 1;
return search(a+1,size-1,key);
}
int main(){
    int n;
    cout<<"Enter the size of n: ";
    cin>>n;
    int arr[98];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key for search: ";
    cin>>key;
    cout<<search(arr,n,key);
    return 0;
}