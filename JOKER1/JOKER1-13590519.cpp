#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
#define MOD 1000000007
#define sd(x) scanf("%lld",&x);
int main()
{
    long long int t;
    sd(t);
    while(t--)
    {
        long long int n;
        sd(n);
        long long int p=1,a[n],i;
        for(i=0;i<n;i++)
        {
            sd(a[i]);

        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            p=p*(a[i]-i)%MOD;
        }
        printf("%lld\n",p);
    }
    printf("KILL BATMAN\n");
    return 0;
}
