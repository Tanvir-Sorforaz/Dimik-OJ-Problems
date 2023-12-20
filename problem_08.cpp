#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int j = 0; j < t; j++)
    {
        int ar[3];
        for(int i = 0; i < 3; i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+3);
        cout<<"Case "<<j+1<<":";
        for(int i = 0; i < 3; i++)
        {
            cout<<" "<<ar[i];
        }
        cout<<endl;
        
    }
    
    

    return 0;
}