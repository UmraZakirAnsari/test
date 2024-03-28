#include<iostream>
using namespace std;
void fibonacci(int num){
    int first_number=0;
    int second_number=1;
    int current;
    if(num==1){
        current=0;
    }
    if(num==2){
        current=1;
    
    }
    for(int i=3;i<=num;i++){
        current=first_number+second_number;
        first_number=second_number;
        second_number=current;
    //    cout<<endl<<current;
    }
     cout<<current;

}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    fibonacci(num);
    return 0;
}