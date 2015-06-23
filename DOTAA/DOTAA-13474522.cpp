#include<iostream>
#include<algorithm>
#include<stdio.h>
#define sd(x) scanf("%lld",&x)
using namespace std;
int main()
{
    long long int t;
    sd(t);
    while(t--)
    {
        long long n,m,d;
        sd(n);
        sd(m);
        sd(d);
        long long h[n],i,k=0;
        for(i=0;i<n;i++)
        {
            sd(h[i]);
        }
        sort(h,h+n);
        for(i=n-1;i>=0;i--)
        {
            if(k>=m)
            {
                goto y;
            }
            while(h[i]-d>0 && k<=m)
            {
                k++;
                h[i]=h[i]-d;
            }
        }
        y:;
        if(k>=m)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
