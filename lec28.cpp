#include<iostream>
using namespace std;
void sum_pos(int a[],int size,int sum,int index){
    if(index==size){
        cout<<sum<<" ";
        return;
    }


   sum_pos(a,size,sum,index+1);
   sum_pos(a,size,sum+a[index],index+1);
}
   
int main(){
    int arr[6]={2,5,1,6,7,11};
    int sum=0;
    // int total=0;
    sum_pos(arr,6,sum,0);
    return 0;
}