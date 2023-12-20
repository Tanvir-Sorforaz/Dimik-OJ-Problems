#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int ar[101]={0};
    cin.ignore();
    for (int i = 0; i < t; i++)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        string number;
        while(ss>>number){
            ar[i]++;
        }
        
    }
    for (int i = 0; i < t; i++)
    {
        cout<<ar[i]<<endl;
    }
    
    

    return 0;
}