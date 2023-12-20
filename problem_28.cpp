#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int ar[n];
        int result=1;
        int mx=INT_MIN;
        int mn=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin>>ar[i];
        }
        for (int i = 1; i < n; i++)
        {   
            if(ar[i]==ar[i-1]){
                continue;
            }
            else if(ar[0]<ar[1]){
                if(ar[i]>mx){
                    mx=ar[i];
                }
                else{
                    result=0;
                }
            }
            else if(ar[0]>ar[1]){
                if(ar[i]<mn){
                    mn=ar[i];
                }
                else{
                    result=0;
                }
            }
        }
        if(result==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }   
    }
    return 0;
}