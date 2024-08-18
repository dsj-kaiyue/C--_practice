#include <bits/stdc++.h>
using namespace std;
int f[1010];
int sol(int x)
{
    if (f[x] !=-1)
        return f[x];
    int ans=1;
    for (int i=1;i<=x/2;i++)
    {
        ans += sol(i);
    }
    return f[x]=ans;
}
int main (void){
    int n;
    cin>>n;
    memset(f,-1,sizeof(f));
    cout<<sol(n)<<endl;
    return 0;
}