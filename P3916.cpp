#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
vector<int> v[MAX];
int vis[MAX];
int mx=0;
void dfs (int x)
{
    mx=max(mx,x);
    for (int i=0,sz=v[x].size();i<sz;i++)
    {
        if (!vis[v[x][i]])
        {
            vis[v[x][i]]=1;
            dfs(v[x][i]);
        }
    }
}
int main (void){
    int n,m,x,y;
    // cin>>n>>m;
    scanf("%d%d",&n,&m);
    for (int i=0;i<m;i++)
    {
        // cin>>x>>y;
        scanf("%d%d",&x,&y);
        v[x].push_back(y);
    }

    for (int i=1;i<=n;i++)
    {
        mx=0;
        memset(vis,0,sizeof(vis));
        vis[i]=1;
        dfs(i);
        // cout<<mx<<' ';
        printf("%d ",mx);
    }

    return 0;
}