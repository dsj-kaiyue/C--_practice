#include <bits/stdc++.h>
using namespace std;

bool check(int x){
    for (int i=2;i*i<x;i++){
        if (x%i==0){
            return 0;
        }
    }
    return 1;
}
int main (void){
    int n,k,ans=0,arr[20];
    cin>>n>>k;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int U=1<<n;
    for (int s=0;s<U;s++){
        if (__builtin_popcount(s)==k){
            int sum=0;
            for (int i=0;i<n;i++){
                if(s&(1<<i)){
                    sum +=arr[i];
                }
            }
            if(check(sum)==1){
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}