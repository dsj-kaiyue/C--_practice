#include <iostream>
using namespace std;
int main (void){
    string s,s1;
    int ans=0,firstpos,nextpos;
    getline(cin,s);
    getline(cin,s1);
    
    for (int i=0;i<s.length();i++)
        if (s[i]>='a' && s[i] <='z')
            s[i]=s[i]-'a'+'A';

    s.insert(0," ");
    s+=" ";
    for (int i=0;i<s1.length();i++)
        if (s1[i]>='a' && s1[i] <='z')
            s1[i]=s1[i]-'a'+'A';
    s1.insert(0," ");
    s1+=" ";
    // cout<<s<<endl<<s1<<endl;

    firstpos=(int)s1.find(s);
    nextpos=(int)s1.find(s);

    while(nextpos !=-1)
    {
        ans++;
        nextpos=s1.find(s,nextpos+1);
    }
    if (ans !=0)
        cout<<ans<<' '<<firstpos<<endl;
    else
        cout<<firstpos<<endl;
        
    return 0;
}