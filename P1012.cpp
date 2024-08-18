#include <bits/stdc++.h>
using namespace std;
bool cmp(string a,string b){
    return a+b < b+a;
}

int main (void){
    int n;
    cin >>n;
    string  arr[20];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,cmp);
    for (int i=n-1;i>=0;i--){
        cout<<arr[i];
    }
    return 0;
}