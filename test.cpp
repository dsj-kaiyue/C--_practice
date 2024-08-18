#include <bits/stdc++.h>
using namespace std;
int main (void){
    int n=5,arr[5];
    for (int i=0;i<5;i++)
        arr[i]=i+1;
    do
    {
        cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4]<<endl;
    } while (next_permutation(arr,arr+5));
    
    return 0;
}