#include <bits/stdc++.h>
using namespace std;
int main (void){
    int n,m,ans=0,cnt=0,arr[21];

    cin>>n>>m;
    int U=1<<n;
    for(int s=U-1;s>=0;s--){
        cnt=0;
        for (int i=0;i<n;i++){
            if (s&(1<<i)){
                arr[cnt++]=i;
            }
        }
        if(cnt==m){
            for (int i=cnt-1;i>=0;i--){
                cout<<setw(3)<<n-arr[i];
            }
            cout<<endl;
        }
    }
    // for (int i=0;i<n;i++){
    //     cout<<arr[i]<<endl;
    // }
    return 0;
}