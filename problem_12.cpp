#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
     cin>>t;
     while(t--){
        int num;
        cin>>num;
        unsigned long long a=5;
        int count=0;
        while(a<=num)
        {
            count+=(num/a);
            a*=5;
        }
        cout<<count<<endl;
     }

    return 0;
}