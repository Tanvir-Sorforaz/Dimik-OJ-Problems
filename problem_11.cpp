#include<bits/stdc++.h>
using namespace std;
long long int recursion(int n){
    
    if(n==1) return 1;
    
    return n*recursion(n-1);
    
}
int main(){
    int t;
    cin>>t;
    int ar[t];
    for (int i = 0; i < t; i++)
    {
        cin>>ar[i];
    }
    for (int i = 0; i < t; i++)
    {   
        cout<<recursion(ar[i])<<endl;;
        
    }

    

    return 0;
}