#include <bits/stdc++.h>
using namespace std;

int main (void){
    int n,index=0;
    cin>>n;
    string strs[n];
    for (int i=0;i<n;i++){
        cin>>strs[i];
    }
    string MAX=strs[0];
    for (int i=0;i<n;i++){
        if  (strs[i].length()>MAX.length() || (strs[i].length()==MAX.length() && strs[i] >MAX)){
            MAX=strs[i];
            index=i;
        }else{
            continue;
        }
    }
    cout<<index+1<<endl<<MAX;
    return 0;
}