#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    for (int i = 0; i < t; i++)
    {
        char a;
        
        cin>>a;

        if(a>='A' &&  a<='Z'){
            cout<<"Uppercase Character"<<endl;
        }
        else if (a>='a' && a<='z'){
            cout<< "Lowercase Character"<<endl;
        }
        else if(a>='0' && a<='9'){
            cout<< "Numerical Digit"<<endl;
        }
        else{
            cout<<"Special Characters"<<endl;
        }
        
    }
    return 0;
    

}