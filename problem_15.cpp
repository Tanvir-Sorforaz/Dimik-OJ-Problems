#include<bits/stdc++.h>
using namespace std;
void count_character(string& word){
    map<char,int>mp;
    for(char ch:word){
        mp[ch]++;
    }
    for(auto it:mp){
        cout<<it.first<<" = "<<it.second<<endl;
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    for (int  i = 0; i < t; i++)
    {
        string word;
        cin>>word;
        count_character(word);
    }
    return 0;
}