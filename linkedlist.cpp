#include<iostream>
using namespace std;
class node{
    public:
 int data;
 node *next;
};
void print (node *head){
   if(head==NULL)
   return ;
    // while(head!=NULL){
        print (head->next);
        cout<<head->data<<"->";
        // head=head->next;
    // } 
} 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    node *head=new node;
    head->data=arr[0];
     head->next = nullptr; 

    node *temp=head;
    for(int i=1;i<n;i++){
        temp->next=new node;
       temp=temp->next;
        temp->data=arr[i];
         temp->next = nullptr; 
    }
   print(head);
   return 0;
}