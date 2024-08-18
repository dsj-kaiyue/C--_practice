#include <bits/stdc++.h>
using namespace std;
int main (void){
    int n,arr[50];
    long long sum=1;
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>arr[i];
    
    sort(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        sum *= arr[i]-i;
        sum %=1000000007;
    }
    cout<<sum<<endl;

    return 0;
}