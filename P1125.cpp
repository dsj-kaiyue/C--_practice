#include <iostream>
#include <cmath>
using namespace std;
int ch[26];
int main (void){
    string s;
    cin>>s;
    for (int i=0;i<s.length();i++)
        ch[s[i]-'a']++;
    
    // for (int i=0;i<26;i++)
    //     cout<<ch[i]<<' ';
    // cout<<endl;

    int max=0,min=10000;
    for (int i=0;i<26;i++)
    {
        if (ch[i]>max)
            max=ch[i];
        if (ch[i]<min && ch[i]!=0)
            min=ch[i];
    }
    // cout<<max<<' '<<min<<endl;
    int cha=max-min;

    int flag=1;
    if (cha==0 ||cha ==1)
        flag=0;
    else{
        for (int i=2;i<pow(max,0.5);i++)
            if (cha%i==0){
                flag==0;
                break;
            }
    }

    if (flag==0)
        cout<<"No Answer"<<endl<<0<<endl;
    else
        cout<<"Lucky Word"<<endl<<cha<<endl;
        
    return 0;
}