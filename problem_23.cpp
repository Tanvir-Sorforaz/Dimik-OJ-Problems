#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string word;
        cin>>word;
        for(char ch:word){
            int ans=ch-64;
            cout<<ans;
        }
        cout<<endl;

    }
    

    return 0;
}