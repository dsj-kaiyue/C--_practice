#include <iostream>
using namespace std;
char map[12][12]={0};
int cow[3],farmer[3],state_index,ans;
bool states[16000000];

//行走一格
void move(int x,int y,int direction,int style){
    if (direction==0){
        if (map[x-1][y]=='*'){
            if (style==0){
                cow[0]=1;
            }else{
                farmer[0]=1;
            }
        }else{
            if (style==0){
                cow[1]--;
            }else{
                farmer[1]--;
            }
        }
    }else if (direction==1){
        if (map[x][y+1]=='*'){
            if (style==0){
                cow[0]=2;
            }else{
                farmer[0]=2;
            }
        }else{
            if (style==0){
                cow[2]++;
            }else{
                farmer[2]++;
            }
        }
    }else if (direction==2){
        if (map[x+1][y]=='*'){
            if (style==0){
                cow[0]=3;
            }else{
                farmer[0]=3;
            }
        }else{
            if (style==0){
                cow[1]++;
            }else{
                farmer[1]++;
            }
        }
    }else if (direction==3){
        if (map[x][y-1]=='*'){
            if (style==0){
                cow[0]=0;
            }else{
                farmer[0]=0;
            }
        }else{
            if (style==0){
                cow[2]--;
            }else{
                farmer[2]--;
            }
        }
    }
}

//判断是否相遇
int meet(){
    if(cow[1]==farmer[1] && cow[2]==farmer[2]){
        return 0;
    }else
        return 1;
}

int main (void){
    //加上围栏
    for (int i=0;i<=11;i++){
        map[0][i]='*';
        map[11][i]='*';
        map[i][0]='*';
        map[i][11]='*';
    }

    //初始化地图
    for (int i=1;i<=10;i++){
        for (int j=1;j<=10;j++){
            cin>>map[i][j];
            if (map[i][j]=='C') cow[1]=i,cow[2]=j;
            if (map[i][j]=='F') farmer[1]=i,farmer[2]=j;
        }
    }
    //开始走
    while(meet()){
        //这里相当于组建一个式子来保证奶牛和农夫位置和方向的状态的唯一性
        state_index=farmer[1]+farmer[2]*10+cow[1]*100+cow[2]*1000+farmer[0]*10000+cow[0]*50000;
        if(states[state_index]){
            cout<<0<<endl;
            return 0;
        }else{
            states[state_index]=1;
            move(cow[1],cow[2],cow[0],0);
            move(farmer[1],farmer[2],farmer[0],1);
            ans++;
        }
    }

    //输出
    cout<<ans<<endl;

    return 0;
}