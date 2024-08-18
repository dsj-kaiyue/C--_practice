#include <bits/stdc++.h>
using namespace std;
#define eps 1e-4
double a,b,c,d;
double f(double x)
{
    return a*x*x*x+b*x*x+c*x+d;
}
int main (void){
    cin>>a>>b>>c>>d;
    for (double i=-100;i<100;i++)
    {
        double L=i,R=i+1;
        if(fabs(f(L))< eps )
            printf("%0.2f ",i);
        else if (fabs(f(R))<eps )
            continue;
        else if (f(L)*f(R)<0)
        {
            while(R-L>eps)
            {
                double mid=(L+R)/2;
                if (f(L)*f(mid)<0)
                    R=mid;
                else
                    L=mid;
            }
            printf("%0.2f ",L);
        }
    }
    return 0;
}