#include <bits/stdc++.h>
using namespace std;
int main (void){
    int n,temp;
    set<int> s1;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>temp;
        s1.insert(temp);
    }
    cout<<s1.size()<<endl;
    for (set<int>::iterator it=s1.begin();it!=s1.end();it++){
        cout<<*it<<' ';
    }
    return 0;
}