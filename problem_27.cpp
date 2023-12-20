#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a=n/100;
        int temp=n/10;
        int b=temp%10;
        int c=n%10;
        if(pow(a,3)+pow(b,3)+pow(c,3)==n){
            cout<<n<<" is an armstrong number!"<<endl;
        }
        else{
            cout<<n<<" is not an armstrong number!"<<endl;
        }
    }
    

    return 0;
}