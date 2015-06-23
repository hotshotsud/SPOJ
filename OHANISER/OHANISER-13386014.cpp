#include<iostream>
#include<cmath>
#include<stdio.h>
#define MOD 1000000007
using namespace std;
long long int y,ans;
long long int fastPower(long long base,long long power)
{
        long long result=1;
        while (power>0)
        {
                if (power%2==1)
                      {
                        result = (result*base)%MOD;
                      }
                base = (base*base)%MOD;
                power/=2;
        }
        return result;
}
int main()
{
    long long int t,w=0;
    scanf("%lld",&t);
    while(t--)
    {
        w++;
        long long int n,s;
        scanf("%lld",&n);
        if(n<3)
        {
        	if(n==1)
        	{
        		s=1;
        		goto sg;
        	}
        	else if(n==2)
        	{
        		s=3;
        		goto sg;
        	}
        }
        s=(n+1)*fastPower(2,n-2);
        s=s%MOD;
        sg:{}
        printf("Case %lld: %lld\n",w,s);
    }
    return 0;
}
