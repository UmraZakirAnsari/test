#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main(){
    int arr[98];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    queue<int>q;
    for(int i=0;i<k-1;i++){
         q.push(arr[i]);
             }
             for(int i=k-1;i<n;i++){
                q.push(arr[i]);
                display(q);
                q.pop();
             }
             return 0;
}