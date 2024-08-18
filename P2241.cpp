#include <bits/stdc++.h>
using namespace std;
int main (void){
    int n,m;
    cin>>n>>m;
    long long seq=0,rec=0;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if (i==j){
                seq+=(n-i+1)*(m-j+1);
            }else{
                rec+=(n-i+1)*(m-j+1);
            }
        }
    }
    cout<<seq<<' '<<rec;
    return 0;
}