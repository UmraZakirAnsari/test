#include<iostream>
using namespace std;
int main(){
     int a[12];
     int n;
     cout<<"Enter the size of array: ";
     cin>>n;
     cout<<"Enter the elsement of array: ";
     for(int i=0;i<n;i++){
            cin>>a[i];
    }
    //print element in reverse order 
    cout<<"Element in reverse order";
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<endl;
            }
            return 0;
}