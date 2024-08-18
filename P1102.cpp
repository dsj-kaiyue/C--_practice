#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main (void){
    int n,c;
    ll arr[2000],sum=0;
    scanf("%d%d",&n,&c);
    for (int i=0;i<n;i++)
        scanf("%lld",&arr[i]);
    
    sort(arr,arr+n);
    for (int i=0;i<n;i++)
        sum +=upper_bound(arr,arr+n,arr[i]+c)-lower_bound(arr,arr+n,arr[i]+c);
    cout<<sum<<endl;
    return 0;
}