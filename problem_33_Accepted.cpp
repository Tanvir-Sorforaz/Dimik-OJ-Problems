#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        unsigned long long A,B,C;
        cin>>A>>B>>C;
        if(A%C!=0){
            A=(A-(A%C));
            for (unsigned long long i = A+C; i <= B; i+=C)
            {
            cout<<i<<endl;
            }
        }
        else{
        for (unsigned long long i = A; i <= B; i+=C)
        {
            cout<<i<<endl;
        }
        }
        cout<<endl;
    }
    return 0;
}