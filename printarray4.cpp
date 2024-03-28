#include<iostream>
using namespace std;
int main(){
    int arr[]={3,11,13,8,4};
    for(int i=0;i<6;i++)
    {
        for(int j=4;j>=0;j--)
        cout<<arr[j]<<" ";

       cout<<endl;
    }
    return 0;
}