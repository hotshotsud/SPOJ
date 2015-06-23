#include<iostream>
#include<cmath>
#include<iomanip>
#include<stdio.h>
using namespace std;
int main()
{
    const double pi=4*atan(1.0);
    while(1)
    {
        float l;
        cin>>l;
        if(l==0){
            break;
        }
        long double ans;

        ans=(l/pi)*(l/2);
        printf("%.2Lf\n",ans);
    }
    return 0;
}
