#include <bits/stdc++.h>
using namespace std;
long long  arr[21][21]={};
int ctr[21][21]={};
int weiyi[9][2]={
    {0,0},
    {2,1},
    {1,2},
    {-1,2},
    {-2,1},
    {-2,-1},
    {-1,-2},
    {1,-2},
    {2,-1}
};

int main (void){
    int Bx,By,Hx,Hy;
    cin>>Bx>>By>>Hx>>Hy;

    for (int i=0;i<9;i++)
    {
        if (Hx+weiyi[i][0]>=0 && Hx+weiyi[i][0]<Bx+1 && Hy+weiyi[i][1]>=0 && Hy+weiyi[i][1]<=By)
        {
            ctr[Hx+weiyi[i][0]][Hy+weiyi[i][1]]=1;
        }
    }

    arr[0][0]=1-ctr[0][0];

    for (int i=0;i<Bx+1;i++)
    {
        for (int j=0;j<By+1;j++)
        {
            if(ctr[i][j])
            {
                continue;
            }
            if (i!=0)
            {
                arr[i][j] +=arr[i-1][j];
            }
            if (j!=0)
            {
                arr[i][j] +=arr[i][j-1];
            }
        }
    }

    // for (int i=0;i<Bx+1;i++)
    // {
    //     for (int j=0;j<By+1;j++)
    //     {
    //         cout<<arr[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }
    cout<<arr[Bx][By]<<endl;
    return 0;
}