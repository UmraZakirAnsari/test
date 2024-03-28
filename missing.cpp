#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[87];
    cout<<"Enter the element of array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int start =0,end=n-1,mid,index;
    while(start<=end){
        mid=end+(start-end)/2;
        if(arr[mid]==mid)
        {
            start=mid+1;
            index=mid+1;
        }
        else{
            end=mid-1;
            index=mid;
        }
    }
    cout<<index;

    return 0;
}