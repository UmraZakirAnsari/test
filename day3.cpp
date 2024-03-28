#include<iostream>
using namespace std;
int main(){
    // int num;
    // cout<<"Enter a number: ";
    // cin>>num;
    // int i;
    // for(int i=1; i<=10;i++){
    //     cout<<num*i<<"\n";
    // }
    // return 0;
    //SECOND QUESTION
    // int first_number=0;
    // int second_number=1;
    // int n;
    
    // cout<<"Enter the number: ";
    //  cin>>n;
    //  if(n==1){
    //     cout<<first_number;
    //     return 0;
    // }
    // if(n==2){
    //     cout<<second_number;
    //     return 0;
    // }
    //   int current ;     
    //   for(int i=3;i<=n;i++){
    //   current =first_number+second_number;
    //   first_number=second_number;
    //   second_number=current;
      
    //     }
    //     cout<<current;
    //     return 0;
    int row,col;
    cout<<"Enter number of rows: ";
    cin>>row;
    cout<<"Enter number of colomn: ";
    cin>>col;
    int count =1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            // cout<<(row-j+1);
            cout<<count<<" ";
            count++;
        }
        cout<<"\n";
    }
    return 0;
}