#include <bits/stdc++.h>
using namespace std;
int main (void){
    int n,c,x,arr[100000],ans=0;
    map<int,int> mp;
    cin>>n>>c;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }

    for (int i=0;i<n;i++)
    {
        ans +=mp[arr[i]-c];
    }
    cout<<ans;
    return 0;
}