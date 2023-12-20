#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        unsigned long long a,b,c;
        cin>>a>>b>>c;
        if(a>b){
            int temp=b;
            b=a;
            a=temp;
        }
        for (unsigned long long i = b; i <= c; i+=b)
        {
            if(i%a==0){
                cout<<i<<endl;
            }
        }
        cout<<endl;
        
    }
    return 0;
}