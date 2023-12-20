#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        while (n>=0)
        {
            if(n>=2){
                cout<<2<<"^"<<n<<" + ";
            }
            else if(n==1){
                cout<<2<<" + ";
            }
            else if(n==0){
                cout<<1;
            }
            n--;
        }
        cout<<endl;
    }
    return 0;
}