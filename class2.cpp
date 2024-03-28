#include<iostream>
using namespace std;
class car{
    public:
    int cost;
    int mileage;
    car(){
        cout<<"Hello constructor\n";
    }
    ~car(){
        cout<<"destructor executed:";
    }
    // void print(){
    //     cout<<cost<<" "<<mileage;
    // }
};
int main(){
    // car obj;
    car *p =new car;
    delete p; 
    // // obj.print();
    // car *p= new car;
    // // p->cost=20;
    // (*p).cost=20;
    // p->mileage=3000;
    // cout<<p->cost;
    // return 0;
}