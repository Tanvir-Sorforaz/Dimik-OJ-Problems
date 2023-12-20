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
        for(int j=0;j<ar[i];j++){
            for(int k=0;k<ar[i];k++){
            cout<<"*";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
    }