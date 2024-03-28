#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *next;

Node(int value){
    data=value;
    next=NULL;
}
};
class stack{
  Node *top;
  int size;
  public:
  stack(){
    top=NULL;
    size=0;
  }
//push
void push(int value){
    Node *temp=new Node(value);
    if(temp==NULL){
        cout<<"Stack overflow";
        return;
    }
    else{
    temp->next=top;
    top=temp;
    size++;
    }
}
//pop
void pop(){
if(top==NULL){
    cout<<"Stack underflow";
    return;
  }
  else
  {
  Node *temp=top;
cout << "Popped " << top->data << " from the stack\n";
  top=top->next;
  delete temp;
  size--;
  } 
         }
//peek;
int peek(){
    if(top==NULL){
    cout<<"Stack is empty";
    return -1;
    }
    else{
        return top->data;
    }
}
// IsEmpty
 bool IsEmpty()
 {
    return top==NULL;

 }
  int IsSize(){
    return size;
 }
};
int main() {
    stack S;

    S.push(6);
    S.push(4);
    S.push(16);
    S.push(62);
    S.push(86);

    cout << "Top element: " << S.peek() << endl;
    cout << "Size of the stack: " << S.IsSize() << endl;

    S.pop();
    S.pop();

    cout << "Top element after popping: " << S.peek() << endl;
    cout << "Size of the stack after popping: " << S.IsSize() << endl;

    return 0;
}
