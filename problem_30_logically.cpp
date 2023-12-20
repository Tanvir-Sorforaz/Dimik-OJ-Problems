#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int result[t]={0};
    unsigned long long int dalal[t]={0};
    
    for(int i=0;i<t;i++)
    {
        unsigned long long n;
        cin>>n;

        unsigned long long sum=0;
        for (unsigned long long j = 1; j <= n/2; j++)
        {
            if (n%j==0)
            {
                sum+=j;
            }

            
        }
        if(sum==n) {
            result[i]=1;
            dalal[i]=n;}        
        else{dalal[i]=n;}
    }

    for (int i = 0; i < t; i++)
    {
        (result[i]==1)? cout<<"YES, "<<dalal[i]<<" is a perfect number!"<<endl : cout<<"NO, "<<dalal[i]<<" is not a perfect number!"<<endl;
    }
    return 0;
}