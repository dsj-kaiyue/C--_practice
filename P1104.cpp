#include <bits/stdc++.h>
using namespace std;
struct student
{
   string name;
   int i;
   int year;
   int month;
   int day;
};

bool cmp (student a,student b){
    if(a.year <b.year){
        return 1;
    }else if (a.year ==b.year){
        if (a.month <b.month){
            return 1;
        }else if (a.month==b.month){
            if (a.day < b.day){
                return 1;
            }else if (a.day ==b.day) {
                if (a.i> b.i){
                    return 1;
                }else{
                    return 0;
                }
            }else{
                return 0;
            }
        }else{
            return 0;
        }
    }else {
        return 0;
    }
}
int main (void){
    int n;;
    student arr[100];
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i].name>>arr[i].year>>arr[i].month>>arr[i].day;
        arr[i].i=i;
    }
    
    sort(arr,arr+n,cmp);
    for(int i=0;i<n;i++){
        cout<<arr[i].name<<endl;
    }

    return 0;
}