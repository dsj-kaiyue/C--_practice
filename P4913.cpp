#include <bits/stdc++.h>
using namespace std;
typedef struct node{
    int left,right;
}node;
int n,ans;
node tree[1000000];

void dfs(int id,int deep)
{
    if(id==0)
        return ;
    else
    {
        ans=max(ans,deep);
        dfs(tree[id].left,deep+1);
        dfs(tree[id].right,deep+1);
    }
}
int main (void){

    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>tree[i].left>>tree[i].right;
    
    dfs(1,1);
    cout<<ans<<endl;
    return 0;
}