#include <bits/stdc++.h>
using namespace std;
int main (void){
    int n,q,fla,i,j,k;
    cin>>n>>q;
    vector< vector<int> > v(n+1);
    for (int x=0;x<q;x++)
    {
        cin>>fla;
        if (fla==1)
        {
            cin>>i>>j>>k;
            if (j+1>v[i].size())
            {
                v[i].resize(j+1);
                v[i][j]=k;
            }else
            {
                v[i][j]=k;
            }
            
        }
        if (fla==2)
        {
            cin>>i>>j;
            cout<<v[i][j]<<endl;
        }
    }
    return 0;
}