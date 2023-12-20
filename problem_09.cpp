#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    unsigned long long ar[t];
    for (int i = 0; i < t; i++)
    {
        cin>>ar[i];
    }
    for (int i = 0; i < t; i++)
    {   int number=sqrt(ar[i]);
        if(number==sqrt(ar[i])){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    

    return 0;
}