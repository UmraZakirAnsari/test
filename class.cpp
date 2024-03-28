#include<iostream>
using namespace std;
class student{
    public:
    int roll;
    string name;
    string branch;
};
int main(){
    student obj;
    obj.roll=78;
    obj.name="UMRA";
    obj.branch="CSE";
    cout<<obj.roll<<" ";
    return 0;
}