#include <iostream>
#include <cstring>
using namespace std;
int main (void){
    int n,a,b,c;
    scanf("%d\n",&n);
    char s[20],ans[40],ope;
    for (int i=0;i<n;i++)
    {
        fgets(s,sizeof(s)/sizeof(s[0]),stdin);

        if (s[0]=='a' || s[0]=='b' || s[0]=='c')
            ope=s[0],s[0]=' ';

        sscanf(s,"%d %d",&a,&b);

        switch (ope)
        {
        case 'a':
            sprintf(ans,"%d+%d=%d",a,b,a+b);
            break;
        
        case 'b':
            sprintf(ans,"%d-%d=%d",a,b,a-b);
            break;

        case 'c':
            sprintf(ans,"%d*%d=%d",a,b,a*b);
            break;
        }

        printf("%s\n%d\n",ans,strlen(ans));
    }



    return 0;
}