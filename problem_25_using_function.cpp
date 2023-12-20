#include<bits/stdc++.h>
using namespace std;
unsigned long long main_guru(unsigned long long a,unsigned long long b){
    while (b!=0)
    {
        unsigned long long temp=b;
        b=a%b;
        a=temp;
    }
    return a;
    
}
unsigned long long dalal_2(unsigned long long a,unsigned long long b){
    unsigned long long result=(a*b)/main_guru(a,b);
    return result;
}
unsigned long long dalal_1(unsigned long long ar[]){
    unsigned long long result=ar[0];
    for (int i = 1; i < 2; i++)
    {
        result=dalal_2(result,ar[i]);
    }
    return result;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        unsigned long long ar[2];
        for (int i = 0; i < 2; i++)
        {
            cin>>ar[i];
        }
        unsigned long long lcm=dalal_1(ar);
        cout<<"LCM = "<<lcm<<endl;
    }
    

    return 0;
}