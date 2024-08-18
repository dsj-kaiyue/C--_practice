#include <bits/stdc++.h>
using namespace std;
int N,M,W[51],B[51],R[51];;
string str;
int check(char mark){
    int ans=0;
    for (int i=0;i<M;i++){
        if(str[i]!=mark){
           ans++; 
        }
    }
    return ans;
}

int main (void){
    int sum=MAX_READ_LOCKS;
    char temp;
    cin>>N>>M;
    for (int i=1;i<=N;i++){
        cin>>str;
        W[i]=W[i-1]+check('W');
        B[i]=B[i-1]+check('B');
        R[i]=R[i-1]+check('R');
    }
    // for (int i=1;i<=N;i++){
    //     cout<<W[i]<<' '<<B[i]<<' '<<R[i]<<endl;
    // }

    for (int i=1;i<=N-2;i++){
        for (int j=i+1;j<=N-1;j++){
            sum=min(sum,W[i]+B[j]-B[i]+R[N]-R[j]);
        }
    }
    cout<<sum;
    return 0;
}