#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string sentence;
        getline(cin,sentence);
        vector<char>v1;
        vector<char>v2;
        for(auto it:sentence){
            if(it==' '){
                continue;
            }
            else if(it=='a' || it=='e' || it=='i' || it=='o' || it=='u'){
                v1.push_back(it);
            }
            else{
                v2.push_back(it);
            }
        }
        for(auto it:v1){
            cout<<it;
        }
        cout<<endl;
        for(auto it:v2){
            cout<<it;
        }
        cout<<endl;
    }
    return 0;
}