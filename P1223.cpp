#include <bits/stdc++.h>
using namespace std;
typedef struct person{
    int time;
    int index;
}person;
bool cmp (person a,person b)
{
    return a.time<b.time;
}
int main (void){
    int n;
    double sum=0,sum1=0;
    person T[1000];
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>T[i].time;
        T[i].index=i+1;
    }
    sort(T,T+n,cmp);

    for (int i=1;i<n;i++)
    {
        sum1=0;
        for (int j=0;j<i;j++)
        {
            sum1 +=T[j].time;
        }
        sum +=sum1;
    }
    for (int i=0;i<n;i++)
    {
        cout<<T[i].index<<' ';
    }
    cout<<endl;
    printf("%0.2f\n",sum/n);
    return 0;
}