#include <bits/stdc++.h>
using namespace std;
#define maxn 401
typedef struct coord{
    int x,y;
}coord;
int qipan[maxn][maxn];
int zouwei[8][8]={
    {1,2},
    {1,-2},
    {-1,2},
    {-1,-2},
    {2,1},
    {2,-1},
    {-2,1},
    {-2,-1}
};


int main (void){
    int n,m,x,y;
    coord tmp;
    cin>>n>>m>>x>>y;
    memset(qipan,-1,sizeof(qipan));
    qipan[x][y]=0;
    tmp.x=x;tmp.y=y;
    queue<coord> Q;
    Q.push(tmp);

    while (!Q.empty())
    {
        tmp=Q.front();
        Q.pop();
        int tx,ty,nx,ny;;
        tx=tmp.x;
        ty=tmp.y;

        for (int i=0;i<8;i++)
        {
            nx=tx+zouwei[i][0];
            ny=ty+zouwei[i][1];
            if(nx<1 || ny<1 || nx >n || ny>m || qipan[nx][ny]!=-1)
                continue;
            
            qipan[nx][ny]=qipan[tx][ty]+1;
            tmp.x=nx;
            tmp.y=ny;
            Q.push(tmp);
        }

    }
    

    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            printf("%-5d",qipan[i][j]);
        }
        cout<<endl;
    }

    return 0;
}