#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int sum=0;
    int mul=1;
    while(num>0){
        int digit=num%10;
        sum=sum+digit*mul;
        num=num/10;
        mul=mul*2;
    }
    cout<<sum;
    return 0;

}