#include <iostream>
using namespace std;
int n,m,p,m1,m2,p1,p2;
int fa[5001];
//查找父节点
int find (int i)
{
    if (i==fa[i])
        return i;
    else
    {
        fa[i]=find(fa[i]);
        return fa[i];
    }
        
}

//合并
void join(int x,int y)
{
    int fax=find(x);
    int fay=find(y);
    if (fax!=fay)
    {
        fa[fax]=fay;
    }
}

int main (void){
    
    cin>>n>>m>>p;
    
    for (int i=1;i<=n;i++)
        fa[i]=i;
    
    for (int i=0;i<m;i++)
    {
        cin>>m1>>m2;
        join(m1,m2);
    }

    for (int i=0;i<p;i++)
    {
        cin>>p1>>p2;
        int fa1=find(p1);
        int fa2=find(p2);
        if (fa1==fa2)
        {
            cout<<"Yes"<<endl;
        }else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}