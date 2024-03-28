#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows and colomn: ";
    cin>>row;
    for(int i=1;i<=row;i++){
        //space
        for(int j=1;j<=row-i;j++){
            cout<<" ";
        }
        //star
        for(int k=1;k<=(2*i-1);k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}