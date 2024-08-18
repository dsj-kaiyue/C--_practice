#include <bits/stdc++.h>
using namespace std;
long long n,m,longest,leftt,mid,sum,arr[1000001];
int main (void){
    cin>>n>>m;
    for (int i=1;i<=n;i++)
        cin>>arr[i];
    longest=*max_element(arr+1,arr+n+1);
    while(leftt<=longest)
    {
        mid=(leftt+longest)/2;
        sum=0;
        for (int i=1;i<=n;i++)
        {
            if (arr[i]>mid)
                sum +=arr[i]-mid;
        }
        if (sum<m)
            longest=mid-1;
        else
            leftt=mid+1;
    }
    cout<<leftt-1;

    return 0;
}