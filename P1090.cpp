#include <bits/stdc++.h>
using namespace std;
int main (void){
    int n,n2=0,i,j,sum=0,w,arr1[10001],arr2[10001];
    memset(arr1,127,sizeof(arr1));
    memset(arr2,127,sizeof(arr2));
    cin>>n;
    for (i=0;i<n;i++)
        cin>>arr1[i];
    sort(arr1,arr1+n);
    i=0;j=0;

    for (int k=1;k<n;k++)
    {
        w=arr1[i]<arr2[j]?arr1[i++]:arr2[j++];
        w+=arr1[i]<arr2[j]?arr1[i++]:arr2[j++];

        arr2[n2++]=w;
        sum +=w;
    }
    cout<<sum<<endl;
    return 0;
}