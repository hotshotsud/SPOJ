#include<iostream>
#include<stdio.h>
#include<map>
#define LL long long int
#define sd(x) scanf("%lld",&x)
#define p(y) printf("%lld\n",y)
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {

        LL n;
        sd(n);
        LL a[n];
        map <long long int, long long int> c;
        sd(a[0]);
        c[a[0]]++;
        LL i,maxh=a[0],minh=a[0];
        for(i=1;i<n;i++)
        {
            sd(a[i]);
            c[a[i]]++;
            maxh=max(maxh,a[i]);
            minh=min(minh,a[i]);
        }
            if(maxh>=1)
            {
                if(maxh-minh>1 )
                {
                    printf("-1\n");
                }
                else if(c[maxh]+c[maxh-1]==n)
                {
                    if(maxh==c[maxh-1])
                    {
                       p(maxh);
                    }
                    else if(c[maxh-1]==0 && maxh==n-1)
                    {
                        p(maxh+1);
                    }
                    else
                    {
                        printf("-1\n");
                    }
                }

            }
            else if(maxh==0)
            {
                printf("0\n");
            }
    }
    return 0;
}
