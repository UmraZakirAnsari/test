#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a  binary number: ";
    cin>>num;
    int mul=1;
    int sum=0;
    while(num>0){
        int digit=num%10;
        digit=digit^1;
        sum=sum+digit*mul;
        mul=mul*10;
    }
    cout<<sum;
    return 0;
}