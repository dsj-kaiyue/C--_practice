#include <bits/stdc++.h>
using namespace std;
#define maxn 201
int k[maxn],visited[maxn];
typedef struct flor
{
    int fl,n;
}flor;
int main (void){
    int n,a,b,flag=0;
    cin>>n>>a>>b;
    for (int i=1;i<=n;i++)
        cin>>k[i];

    queue<flor> Q;
    flor begin;
    begin.fl=a;
    begin.n=0;
    visited[a]=1;
    Q.push(begin);

    while (!Q.empty())
    {
        flor tmp,tmpn;
        tmp=Q.front();
        Q.pop();

        if (tmp.fl ==b)
        {
            flag=1;
           cout<<tmp.n<<endl;
           break;
        }

        if (tmp.fl+k[tmp.fl] ==b)
        {
            flag=1;
           cout<<tmp.n+1<<endl;
           break;
        }

        if (tmp.fl+k[tmp.fl] <=n && visited[tmp.fl+k[tmp.fl]]!=1)
        {
            tmpn.fl=tmp.fl+k[tmp.fl];
            tmpn.n=tmp.n+1;
            Q.push(tmpn);
            visited[tmp.fl+k[tmp.fl]]=1;
        }

        if (tmp.fl-k[tmp.fl] >=1 && visited[tmp.fl-k[tmp.fl]]!=1)
        {
            tmpn.fl=tmp.fl-k[tmp.fl];
            tmpn.n=tmp.n+1;
            Q.push(tmpn);
            visited[tmp.fl-k[tmp.fl]]=1;
        }
    }
    if(flag==0)
        cout<<-1<<endl;
    return 0;
}