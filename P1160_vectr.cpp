#include <bits/stdc++.h>
using namespace std;
int main (void){
    int n,k,p,m,x;
    vector<int> v;
    cin>>n;
    v.push_back(1);
    for (int i=2;i<=n;i++)
    {
        cin>>k>>p;
        vector<int>::iterator it=find(v.begin(),v.end(),k);
        if(p==0)
        {
            v.insert(it,i);
        }else
        {
            v.insert(it+1,i);
        }
    }

    cin>>m;
    for (int i=0;i<m;i++)
    {
        cin>>x;
        auto it=find(v.begin(),v.end(),x);
        if (it!=v.end())
        {
            v.erase(it);
        }
    }   

    for (int i=0;i<v.size();i++)
        cout<<v[i]<<' ';
    return 0;
}