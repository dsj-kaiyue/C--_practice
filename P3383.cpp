#include <bits/stdc++.h>
using namespace std;
int arr[100000000],arr1[100000];
int main (void){
    int n,q,k,cnt=0;
    arr[0]=arr[1]=1;
    scanf("%d%d",&n,&q);

    for (int i=2;i*i<=n;i++)
    {
        if (arr[i]==0)
        {
            for (int j=2*i;j<=n;j=j+i)
                arr[j]=1;
        }
    }

    for (int i=2;i<=n;i++)
        if (arr[i]==0)
            arr1[cnt++]=i;
    
    // for (int i=0;i<=8;i++)
    //     cout<<arr1[i]<<' ';
    while(q--)
    {
        scanf("%d",&k);
        printf("%d\n",arr1[k-1]);
    }
   
    return 0;
}