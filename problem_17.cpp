#include<bits/stdc++.h>
using namespace std;
int fun(string &word){
    int vowel=0;
    for(char l:word){
        if(l=='a' || l=='e' || l=='i' || l=='o' || l=='u'){
            vowel++;
        }
    }
    return vowel;
}

int main(){
    int t;
    cin>>t;

    cin.ignore();
    while(t--)
    {   
        string sentence;
        int vowel=0;
        getline(cin,sentence);
        stringstream ss(sentence);
        string word;
        while (ss>>word)
        {
            vowel+=fun(word);
        }
        cout<<"Number of vowels = "<<vowel<<endl;
    }
    return 0;
}