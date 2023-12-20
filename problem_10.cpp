#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        double enemy_run,amr_run,baki_ball;
        cin>>enemy_run>>amr_run>>baki_ball;
        double used_ball=300-baki_ball;    //6*50over=300ball
        cout<<fixed<<setprecision(2)<<(amr_run/used_ball)*6<<" ";
        if(enemy_run-amr_run<0){
            cout<<fixed<<setprecision(2)<<0.0<<endl;;
            continue;
        }
        enemy_run++;
        double baki_run=enemy_run-amr_run;
        cout<<fixed<<setprecision(2)<<(baki_run/baki_ball)*6<<endl;
    }
    

    return 0;
}