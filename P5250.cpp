#include <bits/stdc++.h>
using namespace std;
int main (void){
    int n,opt,Length;
    set<int> s;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>opt>>Length;
        if (opt==1)
        {
            if (s.find(Length) == s.end())
                s.insert(Length);
            else
                cout<<"Already Exist"<<endl;
        }else if(s.empty())
        {
            cout<<"Empty"<<endl;
        }else
        {
            auto it=s.lower_bound(Length);
            if (it ==s.end())
            {
                cout<<*(--it)<<endl;
                s.erase(it);
            }else if (it ==s.begin())
            {
                cout<<*(it)<<endl;
                s.erase(it);
            }else
            {
                auto jt=it;
                jt--;
                if (abs((*jt) - Length) <= abs((*it) -Length) )
                {
                    cout<<*(jt)<<endl;
                    s.erase(jt);
                }else
                {
                    cout<<*(it)<<endl;
                    s.erase(it);
                }

            }       
        }
    }
    return 0;
}