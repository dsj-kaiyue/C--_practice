#include <bits/stdc++.h>
using namespace std;
int n,m,m1,m2,fa[1001];
set<int> s;
int find(int i)
{
    if (i==fa[i])
        return i;
    else
        return fa[i]=find(fa[i]);
}

void join(int x,int y)
{
    if (find(x) != find(y))
        fa[find(x)]=find(y);
}

int main (void){
    while (cin>>n)
    {
        if (n==0)
            break;
        else
        {
            cin>>m;
            s.clear();
            for (int i=1;i<=n;i++)
                fa[i]=i;
            
            for (int i=0;i<m;i++)
            {
                cin>>m1>>m2;
                join(m1,m2);
            }
            for (int i=1;i<=n;i++)
            {
                s.insert(find(i));
            }
            // for (int i=1;i<=n;i++)
            // {
            //     cout<<fa[i]<<' ';
            // }
            cout<<s.size()-1<<endl;
        }
    }
    return 0;
}