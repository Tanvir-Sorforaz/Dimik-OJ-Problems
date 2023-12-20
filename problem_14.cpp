#include<bits/stdc++.h>
using namespace std;
int count_charecter(string &sentence,char ch){
    int count=0;
    for(char l:sentence){
        if(l==ch){
            count++;
        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    
    while (t-- )
    {
        string sentence;
        char ch;
        cin.ignore();
        getline(cin,sentence);
        cin>>ch;
        
        int count=count_charecter(sentence,ch);
        if(count>0){
            cout<<"Occurrence of '"<<ch<<"' in '"<<sentence<<"' = "<<count<<endl;
        }
        else{
            cout<<"'"<<ch<<"'"<<" is not present"<<endl;
        }
    }
    

    return 0;
}