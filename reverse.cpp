#include<iostream>
using namespace std;
int main(){
    int num;
    int a =num;
    cout<<"Enter a number: ";
   cin>>num;
   int reverse =0;
   while(num>0){
    int digit =num%10;
    reverse=reverse*10+digit;
    num=num/10;
   }
   cout<<reverse;
   if(reverse==a){
    cout<<endl<<"number is palindrome";
   }
   else{
    cout<<endl<<"number is not palindrome";
   }
   return 0;
}