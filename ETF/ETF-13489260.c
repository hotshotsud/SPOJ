#include<stdio.h>
#include<math.h>

int main()
{
        long long int t;
        scanf("%lld",&t);
        while(t--)
        {
                long long int n,i,a;
                scanf("%lld",&n);
                a=n;
                for(i=2;i<=sqrt(n);i++)
                {
                    if(n%i==0)
                    {
                        a-=a/i;
                    }
                    while(n%i==0)
                    {
                        n/=i;
                    }
                }
                if(n>1)
                {
                	a-=a/n;
                }
                printf("%lld\n",a);
        }
        return 0;
}
