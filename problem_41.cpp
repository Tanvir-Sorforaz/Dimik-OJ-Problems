#include<bits/stdc++.h>
using namespace std;
unsigned long long recursion(int a){
    if(a==0){
        return 1;
    }else{
        return a*recursion(a-1);
    }
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        double result=0;
        for (int i = 1; i <= n; i++)
        {
            result+=(double)i/recursion(i);
        }
        cout<<fixed<<setprecision(4)<<result<<endl;
        
    }
    

    return 0;
}