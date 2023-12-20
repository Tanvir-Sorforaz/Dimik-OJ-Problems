#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long ar2d[52][52];
        int i,j,n;
        cin>>n;

        ar2d[1][0] = 1;
        ar2d[2][0] = 1;
        ar2d[2][1] = 1;

        for(i =3 ; i <= n+1; i++){
            ar2d[i][0] = 1;
            for(j =1; j < i -1; j++){
                ar2d[i][j] = ar2d[i-1][j-1] + ar2d[i-1][j];
            }
            ar2d[i][j] = 1;
        }
        
        for(int ii =1; ii <= n+1 ; ii++){
            for(int jj =0; jj<ii; jj++){
                if(jj == ii-1){
                    cout<<ar2d[ii][jj];
                }
                else cout<<ar2d[ii][jj]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
} 