#include <bits/stdc++.h>
using namespace std;
int sanjiao[3]={0};

bool isSanjiao(){
    if((sanjiao[0]+sanjiao[1]>sanjiao[2]) 
    && (sanjiao[0]+sanjiao[2]>sanjiao[1])
    && (sanjiao[2]+sanjiao[1]>sanjiao[0])){
        return 1;
    }
    return 0;
}

int main (void){
    int n,temp,sum=0;
    cin>>n;
    int arr[n+1];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int U=1<<n;
    for (int i=1;i<U;i++){
        if (__builtin_popcount(i)==3){
            temp=0;
            memset(sanjiao,0,sizeof(sanjiao));
            for (int j=0;j<n;j++){
                if(i&(1<<j)){
                    sanjiao[temp++]=arr[j];
                }
            }
            if(isSanjiao()){
                sum++;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}