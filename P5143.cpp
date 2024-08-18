#include <bits/stdc++.h>
using namespace std;
struct location
{
    int x;
    int y;
    int z;
};
bool cmp (location a,location b){
    if (a.z < b.z){
        return 1;
    }else {
        return 0;
    }
}
int main (void){
    int N,temp;
    double sum=0;
    location arr[50000];
    cin>>N;
    for (int i=0;i<N;i++){
        cin>>arr[i].x>>arr[i].y>>arr[i].z;
    }
    
    sort(arr,arr+N,cmp);

    for (int i=1;i<N;i++){
        temp=pow(arr[i].x-arr[i-1].x,2)+pow(arr[i].y-arr[i-1].y,2)+pow(arr[i].z-arr[i-1].z,2);
        sum+=pow(temp,0.5);
    }

    printf("%0.3lf",sum);
    return 0;
}