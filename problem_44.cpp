#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,ar1[21],ar2[21];
        cin>>n;
        ar1[0]=1;
        ar2[0]=1;
        ar2[1]=1;
        for (int i = 0; i <= n; i++)
        {   
            if(i==0){
                cout<<ar1[0];
            }
            if(i==1){
                cout<<ar2[0]<<" "<<ar2[1];
            }
            if(i%2==0 && i>=2){
                cout<<ar2[0]<<" ";
                int j;
                if(i==2){
                    ar1[1]=1;
                }
                for ( j = 1; j <= i-1; j++)
                {
                    ar2[j]=ar1[j-1]+ar1[j];
                    cout<<ar2[j]<<" ";
                }
                ar2[j]=1;
                cout<<ar2[j];
                
            }
            else if(i%2!=0 && i>=3){
                cout<<ar1[0]<<" ";
                int j;
                for ( j = 1; j <= i-1; j++)
                {
                    ar1[j]=ar2[j-1]+ar2[j];
                    cout<<ar1[j]<<" ";
                }
                ar1[j]=1;
                cout<<ar1[j];
                
            }
            cout<<endl;
            
        }
        cout<<endl;
        

    }
    

    return 0;
}