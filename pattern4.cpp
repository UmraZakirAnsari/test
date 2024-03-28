#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;
    for(int i=1;i<row;i++){
      for (int j=1;j<=i;j++)
       cout<<"*";
         for(int k=1;k<(2*row-2*i);k++)
         cout<<" ";     
       for(int l=1;l<=i;l++)
       cout<<"*";
      cout<<"\n";
    }
    for(int i =1;i<=(row-1);i++){
        for(int k=1;k<=(row-i);k++)
        cout<<"*";
        for(int j=1;j<=2*i;j++)
        cout<<" ";
        for(int l=1;l<=(row-i);l++)
        cout<<"*";
        cout<<"\n";
    }
    return 0;

}