#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<string>s;
        string word;
        for (int i = 0; i < n; i++)
        {
            cin>>word;
            s.push_back(word);
        }
        sort(s.begin(),s.end());
        for(auto it:s){
            cout<<it<<endl;
        }
        // cout<<endl;
        
        
    }
    

    return 0;
}