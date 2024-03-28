#include<iostream>
using namespace std;
void sum_array( int *arr,int sum,int size)
{ 
    if(size==0)
    return  ;

    sum=sum+arr[0];
    cout<<sum<<" ";
    sum_array(arr+1 ,sum,size-1);
}
int main(){
    int n;
    cin>>n;
    int sum=0;
    int array[9];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    sum_array(array,sum,n);
    // cout<<sum;
    return 0;
}