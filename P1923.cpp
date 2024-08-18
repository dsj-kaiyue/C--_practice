#include <bits/stdc++.h>
using namespace std;
int main (void){
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    for (int i=0;i<n;i++){
         scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    cout<<arr[k];
    return 0;
}