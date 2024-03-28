#include<iostream>
using namespace std;
class stack
{
int *arr;
int size;
int top;
public:
bool flag;
stack(int s){
    size=s;
    top=-1;
    arr=new int[s];
    flag=1;

}

void push(int value){
    if(top==size-1){
        cout<<"Stack owerflow";
        return;
    }
    else{
        top++;
        arr[top]=value;
        cout<<"pushed"<<value<<" in the stack\n";
        flag=0;
    }
}
void pop(){
    if(top==-1)
{
cout<<"Stack undrflow";
return;
}
else{
    cout<<"popped"<<arr[top]<<"from the stack\n";
    top--;
    if(top==-1)
    flag=1;

    
}

}
int peek(){
    if(top==-1)
{
cout<<"Stack is empty";
return -1;
}
else{
 return arr[top];
}
}
bool IsEmpty(){
    if(top==-1)
    return 0;
   else 
   return 1;
}
int IsSize(){
    return top+1;
}
};
int main(){
    stack S(5);
    // S.push(5);
    // S.push(6);
    // S.push(7);
    // cout<<S.peek()<<endl;
    // S.pop();
    // cout<<S.peek()<<endl;
    // cout<<S.IsEmpty()<<endl;
    // cout<<S.IsSize()<<endl;
    S.push(-1);
    int value= S.peek();
    if(S.flag==0)
    cout<<value<<endl;


    

}