#include <iostream>
#include <algorithm>
using namespace std;
int main (void){
    int n,m;
    cin>>n>>m;
    int votes[m];
    for (int i=0;i<m;i++){
        cin>>votes[i];
    }
    sort(votes,votes+m);
    for (int i=0;i<m;i++){
        cout<<votes[i]<<' ';
    }
    return 0;
}