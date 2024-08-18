#include <bits/stdc++.h>
using namespace std;
struct  compete
{
    /* data */
    int num;
    int grade;
};

bool cmp(compete a,compete b){
    if (a.grade >b.grade){
        return 1;
    }else if (a.grade == b.grade){
        if (a.num <b.num){
            return 1;
        }else {
            return 0;
        }
    }else {
        return 0;
    }
}

int main (void){
    int n,m;
    compete coms[5000];
    cin>>n>>m;
    for (int i=0;i<n;i++){
        cin>>coms[i].num>>coms[i].grade;
    }
    //划线人数
    int m1=m*1.5;
    cout<<m1<<endl;
    sort(coms,coms+n,cmp);
    //划线成绩
    int m2=coms[m1-1].grade;

    //真实入选人数
    for (int i=m1;i<n;i++){
        if (coms[i].grade==m2){
            m1++;
        }
    }

    cout<<m2<<' '<<m1<<endl;
    for (int i=0;i<n;i++){
        if (coms[i].grade >= m2){
            cout<<coms[i].num<<' '<<coms[i].grade<<endl;
        }
    }

    
    return 0;
}