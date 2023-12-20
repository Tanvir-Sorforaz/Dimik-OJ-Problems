#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        double a,b,r,x,y;
        cin>>a>>b>>r>>x>>y;
        if(sqrt(pow((a-x),2)+pow((b-y),2))<=r){
            cout<<"The point is inside the circle"<<endl;
        }
        else{
            cout<<"The point is not inside the circle"<<endl;
        }
    }
    

    return 0;
}