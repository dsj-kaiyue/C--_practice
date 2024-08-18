#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int N, M,arr1[10000];
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> arr1[i];
    }
    for (int i=0;i<M;i++){
        next_permutation(arr1,arr1+N);
    }
    for (int i=0;i<N;i++){
        cout<<arr1[i]<<' ';
    }

    return 0;
}