#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
vector<int> v[MAX];
queue<int> q;
int vis[MAX];

void dfs(int n)
{
    vis[n]=1;
    cout<<n<<' ';
    for (int i=0,sz=v[n].size(); i<sz; i++)
    {
        if (!vis[v[n][i]])
        {
            dfs(v[n][i]);
        }
    }
}


void bfs(int n)
{
    q.push(1);
    vis[1]=1;
    while (!q.empty())
    {
        int x=q.front();
        cout<<x<<' ';
        q.pop();

        for (int i=0,sz=v[x].size(); i<sz; i++)
        {
            if (!vis[v[x][i]])
            {
                q.push(v[x][i]);
                vis[v[x][i]]=1;
            }
        }
    }
    
}

int main (void){
    
    //构造邻接表
    int n,m,x,y;
    cin>>n>>m;
    for (int i=0;i<m;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
    }

    for (int i=1;i<=n;i++)
    {
        sort(v[i].begin(),v[i].end());
    }
    
    //深度优先遍历
    dfs(1);
    cout<<endl;

    //重置vis
    memset(vis,0,sizeof(vis));

    //广度优先遍历
    bfs(1);
    cout<<endl;
    return 0;
}