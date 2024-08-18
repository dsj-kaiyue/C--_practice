#include <bits/stdc++.h>
using namespace std;
int main (void){
    int n,k,p,m,x;
    list<int> L;
    cin>>n;
    L.push_back(1);
    for (int i=2;i<=n;i++)
    {
        cin>>k>>p;
        list<int>::iterator it=find(L.begin(),L.end(),k);
        if(p==0)
        {
            L.insert(it,i);
        }else
        {
            L.insert(++it,i);
        }
    }

    cin>>m;
    for (int i=0;i<m;i++)
    {
        cin>>x;
        auto it=find(L.begin(),L.end(),x);
        if (it!=L.end())
        {
            L.erase(it);
        }
    }

    for (auto i=L.begin();i!=L.end();i++)
        cout<<*i<<' ';
    return 0;
}