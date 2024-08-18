#include <bits/stdc++.h>
using namespace std;
int main (void){
    int n,sum=0;
    int arr[2000]={0};
    arr[0]=6;
    int number[10]={6,2,5,5,4,5,6,3,7,6};
    cin>>n;
    //去掉加号和等号
    for (int i=1;i<2000;i++){
        int j=i;
        while(j>0){
            arr[i] += number[j%10];
            j /=10;
        }
    }
    // for (int i=0;i<20;i++){
    //     cout<<arr[i]<<endl;
    // }
    for (int i=0;i<1000;i++){
        for (int j=0;j<1000;j++){
            if (arr[i]+arr[j]+arr[i+j]+4==n){
                sum++;
            }
        }
    }    
    cout<<sum<<endl;   
    return 0;
}