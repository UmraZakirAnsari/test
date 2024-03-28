#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,14,54,12,42};
        for(int i=0;i<6;i++){
            for(int j=0;j<6-i;j++)
            cout<<arr[j]<<" ";
             cout<<endl;
        }
    return 0;
}