#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        unsigned long long A,B,C;
        cin>>A>>B>>C;
        while(A<=B){
            if(A%C==0){
                cout<<A<<endl;
                A+=C;
                continue;
            }
            A++;
        }
        cout<<endl;
    }
    return 0;
}