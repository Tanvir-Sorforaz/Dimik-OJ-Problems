#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int ar[t];
    for(int i=0;i<t;i++){
    cin>>ar[i];
    }
    
    for(int i=0;i<t;i++){
        cout<<"Case "<<i+1<<":";
        for(int j=1;j<=ar[i];j++){
        if(ar[i]%j==0){
        cout<<" "<<j;
        }}
        cout<<endl;
    }
    return 0;
    }