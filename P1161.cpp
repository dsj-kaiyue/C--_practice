#include <bits/stdc++.h>
using namespace std;
int main (void){
    int N,temp,sum=0;
    int arr[10000];
    cin>>N;
    for (int i=0;i<N;i++){
        cin>>arr[i];
    }
    for (int i=0;i<N-1;i++){
        for (int j=0;j<N-1-i;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                sum++;
            }
        }
    }
    // for (int i=0;i<N;i++){
    //     cout<<arr[i]<<' ';
    // }
    cout<<sum;
    return 0;
}