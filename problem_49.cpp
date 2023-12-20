#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    for (int i = 0; i < t; i++)
    {
        unsigned long long n;
        cin>>n;

        if (n % 2 == 0 && n != 2)
        {
            cout<<n<<" is not a prime"<<endl;
            continue;
        }
        int result = 1;
        for (unsigned long long j = 3; j <= sqrt(n); j += 2)
        {
            if (n % j == 0)
            {
                result = 0;
                break;
            }
        }
        if (result==1)
            cout<<n<<" is a prime"<<endl;
        else
            cout<<n<<" is not a prime"<<endl;
    }

    return 0;
}