#include <bits/stdc++.h>
using namespace std;
bool arr[1000000];
void prime(int n){
    memset(arr, false, sizeof(arr));
    int temp=sqrt(n);
    for (int i=2;i<temp;i++){
        if(arr[i]==0){
            for (int j=2;j<=n/i;j++){
                arr[i*j]=1;
            }
        }
    }
}

int isPalindromes(int n){
    int temp1=n;
    int temp=0;
    while(n!=0){
        temp=temp*10+n%10;
        n=n/10;
    }
    // cout<<temp<<endl;
    if (temp==temp1){
        return 1;
    }else{
        return 0;
    }

}
int main (void){
    int a,b;
    cin>>a>>b;
    if (b>10000000){
        b=9999999;
    }
    if (a>b){
        return 0;
    }
    prime(b);
    if (a%2==0){
        a++;
    }

    for (int i=a;i<=b;i=i+2){
        // cout<<arr[i]<<' '<<isPalindromes(i)<<endl;
        if( (arr[i]==0) && (isPalindromes(i)==1) ){
            cout<<i<<endl;
        }
    }
    return 0;
}