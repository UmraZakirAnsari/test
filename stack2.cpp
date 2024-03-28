#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int>S;
S.push(7);
S.push(8);
S.push(9);
cout<<S.size()<<endl;
cout<<S.top()<<endl;
S.pop();
cout<<S.top()<<endl;
cout<<S.empty()<<endl;
}