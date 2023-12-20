#include<bits/stdc++.h>
using namespace std;
void reverce(string&word,int len){
    if(len<0) return;
    cout<<word[len];
    reverce(word,len-1);}
int main(){
    int t;
    cin>>t;
    vector<string>bag;
    for(int i=0;i<t;i++){
        string word;
        cin>>word;
        bag.push_back(word);
    }
    for(int i=0;i<t;i++){
        reverce(bag[i],bag[i].length()-1);
        cout<<endl;
        }
    return 0;
    }