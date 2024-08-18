#include <bits/stdc++.h>
using namespace std;
typedef struct competition
{
    int begin;
    int end;
}comp;

bool cmp(comp a,comp b)
{
    return a.end<b.end;
}

int main (void){
    int n,sum=1,end;
    cin>>n;
    comp oj[n];
    for (int i=0;i<n;i++)
    {
        cin>>oj[i].begin>>oj[i].end;
    }
    sort(oj,oj+n,cmp);
    
    // for (int i=0;i<n;i++)
    // {
    //     cout<<oj[i].begin<<' '<<oj[i].end<<endl;
    // }

    end=oj[0].end;
    for(int i=1;i<n;i++)
    {
        if(oj[i].begin <end)
        {
            continue;
        }else
        {
            sum++;
            end=oj[i].end;
        }
    }
    cout<<sum<<endl;

    return 0;
}