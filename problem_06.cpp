#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int ar[10001]={0};
    
    
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        ar[i]=(n%10)+(n/10000);
    }
    for(int i=0;i<t;i++){
    cout<<"Sum = "<<ar[i]<<endl;}
    return 0;
    }