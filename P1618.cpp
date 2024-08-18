#include <bits/stdc++.h>
using namespace std;
int main (void){
    int A,B,C,a,b,c,num1,num2,num3,mark=0,ans=0,arr[10]={0};
    cin>>A>>B>>C;
    cout<<1000/C;
    for (int i=1;i<=1000/C;i++){
        num1=i*A;
        num2=i*B;
        num3=i*C;
        a=num1;
        b=num2;
        c=num3;
        if (num2>999 || num3>999){
            mark=1;
            break;
        }

        for (int i=0;i<3;i++){
            arr[num1%10]=1;
            num1=num1/10;
            arr[num2%10]=1;
            num2=num2/10;
            arr[num3%10]=1;
            num3=num3/10;
        }
        for (int i=1;i<=9;i++){
            if (arr[i]==0){
                mark=1;
                break;
            }
        }

        for (int i=1;i<=9;i++){
            arr[i]=0;
        }

        if (!mark){
            cout<<a<<' '<<b<<' '<<c<<endl;
            ans++;
        }else{
            mark=0;
        }
    }

    if (ans==0){
        cout<<"No!!!"<<endl;
    }
    return 0;
}