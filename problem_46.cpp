#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        double a,b,c;
        cin>>a>>b>>c;
        double s=(a+b+c)/2;
        double result=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<fixed<<setprecision(3)<<"Area = "<<result<<endl;
    }
    

    return 0;
}