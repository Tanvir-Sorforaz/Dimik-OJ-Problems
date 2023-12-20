#include<iostream>
using namespace std;



int main()
{
    int t;
    cin>>t;
    
    string ar[8] = {"6","28","496","8128","33550336","8589869056","137438691328","2305843008139952128"};
    int result[t]={0};
    string dalal [t];
    
    for (int i = 0; i < t; i++)
    {   string n;
        cin>>n;
        dalal[i]=n;
        for(int j=0;j<8;j++){

            if(ar[j]==n)result[i]=1;    
        }
        
    }
    for (int i = 0; i < t; i++)
    {
        (result[i]==1)? cout<<"YES, "<<dalal[i]<<" is a perfect number!"<<endl : cout<<"NO, "<<dalal[i]<<" is not a perfect number!"<<endl;
    }
    
    

    return 0;
}