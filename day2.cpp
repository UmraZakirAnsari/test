#include<iostream>
using namespace std;
int main(){
    // char c;
    // cout<<"Enter a character: ";
    // cin>>c;
    // if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
    //     cout<<"Vovel";
    // }
    // else {
    //     cout<<"Consonant";
    // }
//     int num;
//     cout<<"Enter a number";
//     cin>>num;
//     if(num%3==0&&num%5==0){
//         cout<<"Number is diivible by 3 and 5";
//     }
//     else{
//         cout<<"not divisible";
//     }
//     return 0;
    //    int year;
    //    cout<<"Enter the year: ";
    //    cin>>year;
    //    if(year%400==0){
    //     cout<<"Leap year";

    //    }
    //    else if(year%4==0&&year%100){
    //     cout<<"Leap year";
    //    }
    //    else {
    //     cout<<"not leap year";
    //    }
    //    return 0;
    // HOME WORK QUESTION 
     int num;
     cout<<"Enter the number: ";
     cin>>num;
     if(num<2){
        cout<<"not prime";
        return 0;
     }
     for (int i=2;i<num;i++){
        if(num%i==0){
            cout<<"not prime";
            return 0;
        } 
     }
        
            cout<<"Prime";
    
     

     return 0;
}