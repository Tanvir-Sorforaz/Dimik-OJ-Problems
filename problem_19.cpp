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
        int count=0;
        stringstream ss(sentence);
        string word;
        while (ss>>word)
        {
            count++;
        }
        cout<<"Count = "<<count<<endl;
    }
    return 0;
}