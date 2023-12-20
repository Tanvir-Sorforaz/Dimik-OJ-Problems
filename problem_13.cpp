#include<bits/stdc++.h>
using namespace std;
int word_count(string &sentence,map<string,int>&mp){
    stringstream ss(sentence);
    string word;
    int count=0;
    while (ss>>word)
    {
        count++;
        mp[word]++;
    }
    return count;
    
}
long long int recursion(int n){
    
    if(n==1) return 1;
    
    return n*recursion(n-1);
    
}
int main(){
    int t;
    cin>>t;
    vector<int>v;
    cin.ignore();
    for(int i=0;i<t;i++){
    string sentence;
    map<string,int>mp;
    getline(cin,sentence);
    long long int upper_factorial=1;
    int total_words= word_count(sentence,mp);
    long long int lower_factorial=recursion(total_words);
    for(auto it:mp){
        if(it.second>1){
            upper_factorial*=recursion(it.second);
        }
    }
    v.push_back(lower_factorial/upper_factorial);
    
    }

    for (int i = 0; i < t; i++)
    {
        cout<<"1/"<<v[i]<<endl;
    }
    



    return 0;
}