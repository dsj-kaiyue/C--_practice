#include <bits/stdc++.h>
using namespace std;
int main (void){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for (int i=0;i<s.length();i++)
    {
        if (s[i]+n>'z')
            s[i]=s[i]+n-'z'-1+'a';
        else
            s[i]=s[i]+n;
    }
    cout<<s;
    return 0;
}