#include <bits/stdc++.h>
using namespace std;
int arr[50050],arr1[100];
int main (void){
    long long L,R,sum=0;
    cin>>L>>R;
    for (int i=2;i*i<=50000;i++)
    {
        if (arr[i]==0)
        {
            for (int j=2*i;j<=50000;j=j+i)
                arr[j]=1;
        }
    }

    for (int i=2;i<=50000;i++)
    {
        if (arr[i]==0)
        {
            for (long long j=L;j<=R;j++)
            {
                if (arr1[j-L]==0)
                {
                    if (j%i==0 && j!=i)
                    {
                        arr1[j-L]=1;
                        // cout<<j<<' '<<i<<endl;
                    }
                }
            }
            
        }
    }
    
    for (long long i=L;i<=R;i++)
    {
        if (arr1[i-L]==0)
            sum++;
    }
    cout<<sum<<endl;

    return 0;
}