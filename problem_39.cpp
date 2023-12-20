#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string word;
        cin>>word;
        int l=word.size();
        int result=1;
        for (int i = 0; i < l/2; i++)
        {
            if(word[i]!=word[l-1-i]){
                result=0;
            }
        }
        if(result==1){
            cout<<"Yes! It is palindrome!"<<endl;
        }
        else{
            cout<<"Sorry! It is not palindrome!"<<endl;
        }
        
    }
    

    return 0;
}