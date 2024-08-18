#include <bits/stdc++.h>
using namespace std;
long long f[1005];
int main (void){
    int m,n;
    cin>>m>>n;
    f[1]=1;
    f[2]=1;
    for(int i=3;i<=(n-m+1);i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    cout<<f[n-m+1]<<endl;
    return 0;
}