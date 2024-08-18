#include <bits/stdc++.h>
using namespace std;
int main (void){
    int n;
    int arr[1000],arrc[1000];
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    for (int i=1;i<n;i++){
        arrc[i]=abs(arr[i]-arr[i-1]);
    }
    sort(arrc+1,arrc+n);
    for (int i=1;i<n;i++){
        // cout<<arrc[i]<<' ';
        if (arrc[i]!=i){
            cout<<"Not jolly";
            break;
        }else if (arrc[i]==i && i==n-1){
            cout<<"Jolly";
        }
    }


    return 0;
}