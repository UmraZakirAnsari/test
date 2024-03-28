#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter a row: ";
    cin>>row>>col;
    int arr[row][col];
    cout<<"Enter element of matrix"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[j][i];
        }
    }
for(int i=0;i<row/2;i++){
    for(int j=0;j<col;j++){
        int temp=arr[i][j];
        arr[i][j]=arr[row-1-i][j];
        arr[row-1-i][j]=temp;
    }
}
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
return 0;

    }