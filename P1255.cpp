#include <bits/stdc++.h>
using namespace std;



int main (void){
    int n;
    cin>>n;
    long long arr[50001];
    arr[1]=1;
    arr[2]=2;
    if (n==1){
        cout<<1<<endl;
    }else if (n==2){
        cout<<2<<endl;
    }else{
        for (int i=3;i<=n;i++)
        {
            arr[i]=arr[i-1]+arr[i-2];
        }
        cout<<arr[n]<<endl;
    }
    return 0;
}