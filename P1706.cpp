#include <bits/stdc++.h>
using namespace std;
int main (void){
    int n,arr[10];
    cin>>n;
    for (int i=0;i<n;i++){
        arr[i]=i+1;
    }
    do
    {
        for (int i=0;i<n;i++){
            cout<<setw(5)<<arr[i];
        }
        cout<<endl;
    } while (next_permutation(arr,arr+n));
    
    return 0;
}