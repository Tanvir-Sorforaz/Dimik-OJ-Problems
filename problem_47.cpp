#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {   int a,b;
        cin>>a;
        vector<int>v1;
        vector<int>v2;
        for (int i = 0; i < a; i++)
        {
            int z;
            cin>>z;
            v1.push_back(z);
        }
        cin>>b;
        for (int i = 0; i < b; i++)
        {
            int z;
            cin>>z;
            v2.push_back(z);
        }
        v1.insert(v1.end(),v2.begin(),v2.end());
        sort(v1.begin(),v1.end());
        for (int i = 0; i < v1.size(); i++)
        {
            if(i==0){
                cout<<v1[i];
            }
            else{
                cout<<" "<<v1[i];
            }
        }
        cout<<endl;
           
    }
    return 0;
}