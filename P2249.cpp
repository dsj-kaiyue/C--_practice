#include <bits/stdc++.h>
using namespace std;
int arr[1000001];
int n,m,x;

int main (void){
    
    cin>>n>>m;
    for (int i=0;i<n;i++)
        cin>>arr[i];
    
    for (int i=0;i<m;i++)
    {
        cin>>x;
        int ans=lower_bound(arr,arr+n,x)-arr;
        if(arr[ans]==x)
            cout<<ans+1<<' ';
        else
            cout<<"-1 ";
    }
    return 0;
}