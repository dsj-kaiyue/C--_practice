#include <iostream>
using namespace std;
int main (void){
    int ans=0;
    string s;

    while (cin>>s)
    {
        ans +=s.length();
    }
    
    cout<<ans;
    return 0;
}