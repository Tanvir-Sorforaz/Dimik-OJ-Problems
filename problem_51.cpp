#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int i = 0;
        while (i <= s1.size() - s2.size())
        {
            if (strncmp(s1.c_str() + i, s2.c_str(), s2.size()) == 0)
            {
                cout<<i<<endl;
                break;
            }
            i++;
        }
    }
    return 0;
}