#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int *p=new int[m];
    for(int i=0;i<m;i++)
    {
        // p[i]=i*2;
        *p=i*2;
        p++;
    }
    p--;
    for(int i=0;i<m;i++)
    {
        // cout<<p[i]<<" ";
        cout<<*p<<" ";
        p--;
    }
    return 0;
}