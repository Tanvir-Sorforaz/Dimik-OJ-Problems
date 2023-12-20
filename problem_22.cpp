#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    long long int ar[100001];
    int i,j;
    for ( i = 2; i <= 100000; i++)
    {
        ar[i]=1;
    }
    
    for ( i = 2; i<=sqrt(100000); i++)
    {
        if(ar[i]==1){
            for ( j = 2; j*i <= 100000; j++)
            {
                ar[i*j]=0;
            }
            
        }
    }
    while(t--){
        int a,b,count=0;
        cin>>a>>b;
        for (int i = a; i <= b; i++)
        {
            if(i==0 || i==1){
                continue;
            }
            else if(ar[i]== 1){
                count++;
            }
        }
        cout<<count<<endl;
        
    }
    return 0;
}