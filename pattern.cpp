#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of colomn: ";
    cin>>col;
    for (int i=1;i<=row;i++){
         // char c ='a'+i-1;
        for(int j=1;j<=i;j++){
            char c ='a'+j-1;
            cout<<c<<" ";
        }
        cout<<"\n";
    }
    return 0;
}