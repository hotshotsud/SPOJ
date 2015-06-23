#include<iostream>
#include<stdio.h>
#define ll long long int
#define sd(x) scanf("%lld",&x)
#define MOD 10000007
using namespace std;

long long int Z,a,b,sum,i;
long long int fastPower(long long base, long long power);
/*long long int S(long long int n, long long int k)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return fastPower(n,k)%MOD+S(n-1,k)%MOD;
    }
}
long long int P(long long int q)
{
    sum=0;
    for(i=1;i<=q;i++)
    {
        sum+=fastPower(i,i)%MOD;
    }
    return sum%MOD;
}*/
int main()
{

    while(cin>>a>>b)
    {

        if(a==0 && b==0)
        {
            return 0;
        }
        Z=fastPower(a,a)%MOD+(2*fastPower(a-1,a-1))%MOD+fastPower(a,b)%MOD+(2*fastPower(a-1,b))%MOD;
        printf("%lld\n",Z%MOD);
    }
    return 0;
}
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
        return result%MOD;
}
