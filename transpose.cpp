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
    cout<<"Transpose of matrix"<<endl;
    for(int i=0;i<row-1;i++){
        for(int j=i+1;j<col;j++){
          int temp=arr[j][i];
          arr[j][i]=arr[i][j];
          arr[i][j]=temp;
        }
    }
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
         cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}