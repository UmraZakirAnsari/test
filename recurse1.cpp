#include<iostream>
using namespace std;
int power(int m,int n){
    if(n==1)
    return m;
    return m*power(m,n-1);

}
int main(){
    int m,n;
    cout<<"Enter the value of m and n: ";
    cin>>m>>n;
    cout<<power(m,n);
    return 0;

}