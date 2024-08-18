#include <bits/stdc++.h>
using namespace std;

int char2int (char ch)
{
    return ch>='0' && ch <='9' ? ch-'0':ch-'A'+10;
}

char int2char(int n)
{
    return n>=0 && n<=9 ?'0'+n: 'A'+n-10;
}


int main (void){
    int n,m,sum=0,index=0,output[30];
    string s;
    cin>>n>>s>>m;
    
    //n进制转10进制
    for (int i=0;i<s.length();i++)
    {
        sum =sum*n +char2int(s[i]);
    }

    //10进制转m进制

    while (sum !=0)
    {
        output[index++]=sum%m;
        sum =sum/m;
    }
    
    //输出

    for (int i=index-1;i>=0;i--)
        cout<<int2char(output[i]);


    return 0;
}