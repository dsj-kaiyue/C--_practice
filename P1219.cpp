#include <bits/stdc++.h>
using namespace std;
#define maxn  100
int a[maxn],n,ans;
int b1[maxn],b2[maxn],b3[maxn];
void dfs(int x)
{
    if (x>n)
    {
        ans++;
        if (ans<=3)
        {
            for (int i=1;i<=n;i++)
            {
                cout<<a[i]<<' ';
            }
            cout<<endl;
        }
        return ;
    }
    for (int i=1;i<=n;i++)
    {
        if (b1[i]==0 && b2[x+i]==0 && b3[x-i+15]==0)
        {
            a[x]=i;
            b1[i]=1,b2[x+i]=1, b3[x-i+15]=1;
            dfs(x+1);
            b1[i]=0,b2[x+i]=0, b3[x-i+15]=0;
        }
    }
}
int main (void){
    cin>>n;
    dfs(1);
    cout<<ans<<endl;
    return 0;
}