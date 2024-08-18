#include <bits/stdc++.h>
using namespace std;
int main (void){
    int n,h[19]={1,1};
    cin>>n;
    for (int i=2;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            h[i] += h[j-1]*h[i-j];
        }
    }
    cout<<h[n]<<endl;
    return 0;
}