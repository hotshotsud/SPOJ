#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
#define LL long long int
#define sd(x) scanf("%lld",&x)
int main()
{
    LL test;
    sd(test);
    LL cou[test],q[test],k,i;
    for(i=0;i<test;i++)
    {
        cou[i]=0;
        sd(q[i]);

            for(k=1;pow(5,k)<=q[i];k++)
            {
                cou[i]=cou[i]+int(q[i]/pow(5,k));
            }

    }
    for(i=0;i<test;i++)
    {
        printf("%lld",cou[i]);
        cout<<endl;
    }
    return 0;

}
