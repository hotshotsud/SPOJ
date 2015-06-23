#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
long long int p(long long int x)
{
    long long int ans=1;
    while(x--)
    {
        ans*=3;
    }
    ans--;
    return ans;
}
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);

        printf("%lld\n",p(n));
    }
    return 0;
}
