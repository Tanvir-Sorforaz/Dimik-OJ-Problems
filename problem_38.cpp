#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        for (int i = 0; i <= ((2*a)-1)/2; i++)
        {
            for (int j = 0; j < i+1; j++)
            {
                cout<<b;
                if(j<i){
                    cout<<" ";
                }
            }
            cout<<endl;
            
        }
        for (int i = (((2*a)-1)/2)-1; i>=0 ; i--)
        {
            for (int j = 0; j < i+1; j++)
            {
                cout<<b;
                if(j<i){
                    cout<<" ";
                }
            }
            cout<<endl;
            
        }
        cout<<endl;
        
    }
    

    return 0;
}