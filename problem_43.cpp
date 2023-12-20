#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        unsigned long long result=1;
        for (int i = 0; i < b; i++)
        {
            result=(result*a)%c;
        }
        
        cout<<"Result = "<<result<<endl;
    }

    return 0;
}