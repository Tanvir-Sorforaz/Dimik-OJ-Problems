#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        unsigned long long a,b;
        cin>>a>>b;
        if(a<b){
            unsigned long long temp=b;
            b=a;
            a=temp;
        }
        unsigned long long lcm=a;
        while(lcm%b!=0){
            lcm+=a;
        }
        cout<<"LCM = "<<lcm<<endl;
    }
    return 0;
}