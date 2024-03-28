#include<iostream>
using namespace std;
void possible(string s,int index,string ans){
    if(ans.size()!=0)
    cout<<ans<<" ";
    if(index==s.size())
    return;
    if(ans.size()==0)
     possible(s,index+1,ans);
    possible(s,index+1,ans+s[index]);
}
int main(){
    string s;
    cin>>s;
    int index=0;
    string ans;
    possible(s,index,ans);
    return 0;
}