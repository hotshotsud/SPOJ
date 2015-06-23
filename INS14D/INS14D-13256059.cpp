#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        n=n/3;
        printf("%lld\n",n);
    }
    return 0;
}
