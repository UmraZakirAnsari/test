#include<iostream>
#include<vector>
using namespace std;
int main(){
string str="umrazakiransari";
int arr[26]={0};
for(int i=0;i<str.size();i++){
int index=str[i]-'a';
arr[index]++;
}
for(int i=0;i<26;i++){
    for(int j=0;j<arr[i];j++){
      char c ='a'+i;
      cout<<c;
    }
}
return 0;
}

