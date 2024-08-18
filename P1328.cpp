#include <iostream>
using namespace std;
int caiquan[5][5]={
    { 0,-1, 1, 1,-1},
    { 1, 0,-1, 1,-1},
    {-1, 1, 0,-1, 1},
    {-1,-1, 1, 0, 1},
    { 1, 1,-1,-1, 0},
};
int main (void){
    int N,Na,Nb,suma=0,sumb=0,cta=0,ctb=0;
    cin>>N>>Na>>Nb;
    int NA[201],NB[201];
    for (int i=0;i<Na;i++){
        cin>>NA[i];
    }
    for (int i=0;i<Nb;i++){
        cin>>NB[i];
    }

    for (int i=0;i<N;i++){
        if(cta>=Na){
            cta=0;
        }
        if(ctb>=Nb){
            ctb=0;
        }
        if (caiquan[NA[cta]][NB[ctb]]>0){
            suma++;
            sumb=sumb+0;
        }else  if (caiquan[NA[cta]][NB[ctb]]==0){
            suma=suma+0;
            sumb=sumb+0;
        }else if (caiquan[NA[cta]][NB[ctb]]<0){
            suma=suma+0;
            sumb++;
        }
        cta++;
        ctb++;
    }

    cout<<suma<<" "<<sumb<<endl;
    return 0;
}