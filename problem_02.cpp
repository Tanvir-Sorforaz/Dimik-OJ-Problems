#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int result[101]={0};
    for(int i=0; i<t;i++){
    string s;
    cin>>s;
    int n=s.size();
    if(s[n-1]%2==0){
    result[i]=1;
    }
    
    }
    for(int i=0; i<t;i++){
    if(result[i]==1){
    cout<<"even"<<endl;}
    else{
    cout<<"odd"<<endl;}}
    
    return 0;
    }