#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter number of rows: ";
    cin>>row;
    for(int i=1;i<=row;i++){
        for (int j=0;j<(row-i);j++){
            cout<<" ";

        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        } 
        cout<<"\n";
    }
    return 0;
}