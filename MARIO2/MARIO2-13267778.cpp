#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long t,p=0;
    scanf("%lld",&t);
    while(t--)
    {
        p++;
        long long m,k;
        scanf("%lld%lld",&m,&k);
        long double ans=(k+(m*k)+1);
        ans=1/ans;
        printf("Case #%lld: %.8Lf\n",p,ans);
    }
    return 0;
}
