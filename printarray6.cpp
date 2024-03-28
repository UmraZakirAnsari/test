#include<iostream>
using namespace std;
int main(){
    int arr[]={3,13,12,8,4};
    for(int i=0;i<5;i++){
        for(int j=4;j>=i;j--)
        cout<<arr[j]<<" ";
         cout<<endl;

    }
    return 0;

}