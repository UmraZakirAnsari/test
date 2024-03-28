#include<iostream>
using namespace std;
void average(int num1,int num2){
    int avg=(num1+num2)/2;
    cout<<avg;
    return;
}
int main(){
    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
     average(num1,num2);
    return 0;
}