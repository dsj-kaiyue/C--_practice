#include <bits/stdc++.h>
using namespace std;
int main (void){
    long long N,B,sum=0;
    int arr[20000];
    cin>>N>>B;
    for (int i=0;i<N;i++){
        cin>>arr[i];
    }
    sort(arr,arr+N);

    for (int i=N-1;i>=0;i--){
        sum += arr[i];
        if (sum>=B){
            cout<<(N-i);
            break;
        }
    }
    return 0;
}