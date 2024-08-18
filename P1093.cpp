#include <bits/stdc++.h>
using namespace std;
struct student
{
    int num;
    int chinese;
    int math;
    int english;
    int sum;
};

bool cmp (student a,student b){
    if (a.sum>b.sum){
        return 1;
    }else if (a.sum <b.sum){
        return 0;
    }else {
        if (a.chinese >b.chinese){
            return 1;
        }else if (a.chinese < b.chinese){
            return 0;
        }else {
            if (a.num < b.num){
                return 1;
            }else {
                return 0;
            }
        }
    }
}

int main (void){
    int n;
    student stus[300];
    cin>>n;
    for (int i=0;i<n;i++){
        stus[i].num=i+1;
        cin>>stus[i].chinese>>stus[i].math>>stus[i].english;
        stus[i].sum=stus[i].chinese+stus[i].math+stus[i].english;
    }

    sort(stus,stus+n,cmp);

    for (int i=0;i<5;i++){
        cout<<stus[i].num<<' '<<stus[i].sum<<endl;
    }

    return 0;
}