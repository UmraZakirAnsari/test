#include<iostream>
using namespace std;
void prime(int num){
    if(num==1){
    cout<<"Not prime";
    return ;
    }
    for(int i=2;i<num;i++){
        if(num/i==0){
        cout<<"Not prime";
       return ;
        }
    else{
        cout<<"prime";
        return ;
    }
    return;
    }
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    prime(num);
    return 0;
}