#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int row,col;
    cout<<"Enter the row and colomn: ";
    cin>>row>>col;
    // int key;
    // cout<<"enter a key: ";
    // cin>>key;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         if(arr[i][j]==key){
    //             cout<<"Found";
    //          return 0;
    //         }
    //     }
    // }
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
          sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
        // cout<<"not found";
    
    return 0;
}