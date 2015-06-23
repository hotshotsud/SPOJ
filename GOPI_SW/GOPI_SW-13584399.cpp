#include<iostream>
#include<stdio.h>
using namespace std;
long long int a[1000001],i;
#define MOD 1000000007
void precalc()
{
    a[1]=1;
    a[2]=2;
    a[3]=6;
    for(i=4;i<1000001;i++)
    {
        a[i]=a[i-1]%MOD*(a[i-1]+1)%MOD;
        a[i]=a[i]%MOD;
    }
}
int main()
{
    long long int t;
    precalc();
    scanf("%lld",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        printf("%lld\n",a[n]%MOD);
    }
    return 0;
}
