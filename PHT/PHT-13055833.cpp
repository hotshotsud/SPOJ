#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
    unsigned long long int t,i=0;
    scanf("%lld",&t);
    while(t--)
    {
        i++;
        unsigned long long int n,ans;
        scanf("%lld",&n);
        ans=((-2+sqrt(4+4*n))/2);
        printf("Case %lld: %lld\n",i,ans);
    }
    return 0;
}
