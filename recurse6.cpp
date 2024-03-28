#include<iostream>
using namespace std;
void binary_search( int *a ,int size,int start,int end,int key,int &index){
     if(end<start)
     return;
     int mid=end+(start-end)/2;
     if(a[mid]==key){
        index=mid;
        return ;

     }
     else if(a[mid]>key)
      binary_search(a,size,start,mid-1,key,index);
    else 
     binary_search(a,size,mid+1,end,key,index);
}
int main(){
    int n;
    cout<<"Enter the size of n: ";
    cin>>n;
    int arr[98];
    int start=0,end=n-1,key;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key for search: ";
    cin>>key;
    int index=-1;
    binary_search(arr,n,start,end,key,index);
    cout<<index;
    return 0;
}