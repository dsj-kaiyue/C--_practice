#include <iostream>
using namespace std;
int main (void){
    int n,flag,a,b;
    cin>>n;

    string s,str;
    cin>>s;

    while (n--)
    {
        cin>>flag;
        switch (flag)
        {
        case 1:
            cin>>str;
            s=s+str;
            cout<<s<<endl;
            break;
        
        case 2:
            cin>>a>>b;
            s=s.substr(a,b);
            cout<<s<<endl;
            break;
        case 3:
            cin>>a>>str;
            s=s.insert(a,str);
            cout<<s<<endl;
            break;
        case 4:
            cin>>str;
            cout<<(int)s.find(str)<<endl;
            break;
        }

    }
    
    
    return 0;
}