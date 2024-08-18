#include <bits/stdc++.h>
using namespace std;
int main (void){
    string s;
    cin>>s;
    stack<int> st;
    int n=0,n1,n2,n3;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            n = n*10+(s[i]-'0');
        }else if(s[i]=='.')
        {
            st.push(n);
            n=0;
        }else if(s[i]=='+')
        {
            n2=st.top();
            st.pop();
            n1=st.top();
            st.pop();
            n3=n1+n2;
            st.push(n3);
        }else if(s[i]=='-')
        {
            n2=st.top();
            st.pop();
            n1=st.top();
            st.pop();
            n3=n1-n2;
            st.push(n3);
        }else if(s[i]=='*')
        {
            n2=st.top();
            st.pop();
            n1=st.top();
            st.pop();
            n3=n1*n2;
            st.push(n3);
        }else if(s[i]=='/')
        {
            n2=st.top();
            st.pop();
            n1=st.top();
            st.pop();
            n3=n1/n2;
            st.push(n3);
        }
    }
    cout<<st.top()<<endl;
    return 0;
}