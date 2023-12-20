#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {   int a;
        cin>>a;
        int ar[a];
        for (int i = 0; i < a; i++)
        {
            cin>>ar[i];
        }
        cout<<ar[0];
        for (int i = 2; i < a; i+=2)
        {
            cout<<" "<<ar[i];
        }
        cout<<endl;
        

    }
    

    return 0;
}