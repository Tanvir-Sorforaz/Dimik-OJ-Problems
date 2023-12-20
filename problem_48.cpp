#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {   int n;
        cin>>n;
        long long ar[n]={0};
        for (int i = 0; i < n-1; i++)
        {
            int x;
            cin>>x;
            ar[x-1]=1;
        }
        for (int i = 0; i < n; i++)
        {
            if(ar[i]==0){
                cout<<i+1;
            }
        }
        cout<<endl;
    }
    return 0;
}