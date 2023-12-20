#include<bits/stdc++.h>
using namespace std;
void recursion(string& word,int l){
    if(l<0) return;
    cout<<word[l];
    recursion (word,l-1);
}
void reverce(string &sentence ){
    vector<string>v;
    int count=0;
    stringstream ss(sentence);
    string word;
    while (ss>>word)
    {   
        count++;
        v.push_back(word);
    }
    for (int i = 0; i<count; i++)
    {
        int l=v[i].length()-1;
        recursion(v[i],l);
        if(i<count-1){
            cout<<" ";
        }
    }
}
int main(){
    int t;
    cin>>t;

    cin.ignore();
    while(t--)
    {
        string sentence;
        getline(cin,sentence);
        reverce(sentence);
        cout<<endl;
    }
    return 0;
}