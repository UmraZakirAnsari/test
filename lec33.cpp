#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node *prev;
    node( int x){
        data=x;
        prev=NULL;
        next=NULL;
    }
};
int main(){
 int arr[5]={1,2,3,4,5};
 node *head;
 head=new node (arr[0]);
 node *first=head;
 for(int i=1;i<5;i++){
    first->next=new node(arr[i]);
    first->next->prev=first;
    first=first->next;
 }
 first=head;
 while(first){
    cout<<first->data<<" ";
    first=first->next;
 }
 return 0;
}