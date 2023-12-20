#include<iostream>
using namespace std;



int main()
{
    int t;
    cin>>t;
    
    string ar[8] = {"6","28","496","8128","33550336","8589869056","137438691328","2305843008139952128"};
    for (int i = 0; i < t; i++)
    {
        unsigned long long n;
        cin>>n;
        if(n>=6){
            cout<<ar[0]<<endl;
        }
        if(n>=28){
            cout<<ar[1]<<endl;
        }
        if(n>=496){
            cout<<ar[2]<<endl;
        }
        if(n>=8128){
            cout<<ar[3]<<endl;
        }
        if(n>=33550336){
            cout<<ar[4]<<endl;
        }
        if(n>=8589869056){
            cout<<ar[5]<<endl;
        }
        cout<<endl;
    }
    return 0;
}