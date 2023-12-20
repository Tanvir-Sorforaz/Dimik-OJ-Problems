#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        long long l=s.size();
        reverse(s.begin(),s.end());
        int a=0;
        for (int i = 0; i < l; i++)
        {
            if(s[i]=='0'){
                continue;
            }
            else{
                a=i;
                break;
            }
        }
        for (int i = a; i < l; i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
    

    return 0;
}