#include <bits/stdc++.h>
using namespace std;
int arr[2000][2000];
int main (void){
    int t,k,n,m,sum=0;
    cin>>t>>k;
    for (int i=0;i<2000;i++)
    {
        arr[i][0]=arr[i][i]=1;
        for (int j=1;j<i;j++)
        {
            arr[i][j]=(arr[i-1][j]+arr[i-1][j-1])%k;
        }
    }

    // for (int i=0;i<10;i++)
    // {
    //     for (int j=0;j<=i;j++)
    //     {
    //         cout<<arr[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }

    while (t--)
    {
        cin>>n>>m;
        sum=0;
        for (int i=0;i<=n;i++)
        {
            for (int j=0;j<=min(i,m);j++)
            {
                if (arr[i][j]==0)
                    sum++;
            }
        }
        cout<<sum<<endl;
    }
    
    return 0;
}