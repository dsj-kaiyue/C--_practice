#include <bits/stdc++.h>
using namespace std;
typedef  struct jindui{
    int m;
    int v;
}jindui;
bool cmp (jindui a,jindui b)
{
    //巧妙
    return a.v*b.m >b.v*a.m;
}
int main (void){
    int N,T;
    double sum=0;
    cin>>N>>T;
    jindui dui[N];
    for (int i=0;i<N;i++)
    {
        cin>>dui[i].m>>dui[i].v;
    }
    sort(dui,dui+N,cmp);

    int index=0;
    while(T>=0)
    {
        if (T-dui[index].m >=0)
        {
            sum += dui[index].v;
            T -= dui[index].m;
            index++;
        }
        else
        {
            break;
        }
    }

    sum += (dui[index].v+0.0)/dui[index].m*T;
    printf("%0.2f\n",sum);
    return 0;
}