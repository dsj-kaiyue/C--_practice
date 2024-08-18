#include <bits/stdc++.h>
using namespace std;
int price[105];
int f[101][10001];
int main (void){
    int n,m;
    cin>>n>>m;
    for (int i=1;i<=n;i++)
        cin>>price[i];
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            if(j==price[i])
                f[i][j]=f[i-1][j]+1;
            if(j>price[i])
                f[i][j]=f[i-1][j]+f[i-1][j-price[i]];
            if(j<price[i])
                f[i][j]=f[i-1][j];
        }
    }
    cout<<f[n][m]<<endl;
    return 0;
}