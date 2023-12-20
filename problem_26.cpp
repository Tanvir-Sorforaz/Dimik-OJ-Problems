#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        double n;
        cin>>n;
        int count=0;
        while (n>=1)
        {
            count++;
            n=n/2;
        }
        
        cout<<count<<" days"<<endl;
    }
    return 0;
}