#include<iostream>
using namespace std;
void fun(int **x,int n,int m ){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            x[i][j]=i+j;
        }
    }
}
int main(){
    int row,col;
    cin>>row>>col;
    int **p=new int *[row];
    for(int i=0;i<row;i++)
        p[i]=new int [col];
    fun(p,row,col);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}