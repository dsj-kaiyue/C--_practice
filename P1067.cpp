#include <iostream>
using namespace std;


int main(void)
{
    int n,shouwei=0;
    int  arr[101];
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
       cin>>arr[i];
    }

    for (int i=0;i<=n;i++){
        if (arr[i]==0){
            shouwei++;
        }
        if (i==shouwei && i!=n){
            if(arr[i]<0){
                if (arr[i]==-1){
                    cout<<"-x^"<<n-i;
                }else{
                    cout<<arr[i]<<"x^"<<n-i;
                }
                
            }else if (arr[i]==0){
                continue;;
            }else{
                if(arr[i]==1){
                    cout<<"x^"<<n-i;
                }else{
                    cout<<arr[i]<<"x^"<<n-i;
                }
            }
        }else if (i==shouwei && n==shouwei){
            cout<<arr[i];
        }
        else if (i==n){
            if (arr[i]<0){
                cout<<arr[i];
            }else if (arr[i]==0){
                continue;;
            }else{
                cout<<"+"<<arr[i];
            }
        }else{
            if (arr[i]<0){
                if (arr[i]==-1){
                    cout<<"-x^"<<n-i;
                }else{
                    cout<<arr[i]<<"x^"<<n-i;
                }
            }else if (arr[i]==0){
                continue;;
            }else{
                if(arr[i]==1){
                    cout<<"+x^"<<n-i;
                }else{
                    cout<<"+"<<arr[i]<<"x^"<<n-i;
                }
            }
        }
    }
    return 0;
}