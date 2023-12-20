#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        unsigned long long result=0;
        for (int i = 0; i <= b; i++)
        {
            result+=pow(a,i); 
        }
        cout<<"Result = "<<result<<endl;
        
    }
    

    return 0;
}