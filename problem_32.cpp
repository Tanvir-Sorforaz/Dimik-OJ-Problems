#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        unsigned long long a,b;
        cin>>a>>b;
        unsigned long long temp=a;
        if(a>b){
            cout<<"Invalid!"<<endl;
        }
        else{
            while (temp<=b)
            {
                cout<<temp<<endl;
                temp+=a;
            }
        }
        cout<<endl;
    }
    return 0;
}