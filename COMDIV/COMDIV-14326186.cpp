#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>

using namespace std;
#define sd(x) scanf("%lld",&x)
#define p(y) printf("%lld\n",y)
#define ll long long
bool prime[1000009];
ll check[100000];
int main()
{

    ll i,j;


    ll ans=1;

    for(i=3;i<1001;i+=2)
    {
        if(!prime[i])
        {
            for(j=i*i;j<=1000000;j+=i)
            {
                prime[j]=true;
            }
        }

    }
    prime[2]=0;
    check[0]=2;
    j=1;
    for(i=3;i<=1000000;i+=2)
    {
        if(!prime[i])
        {
            check[j++]=i;
        }
    }
    ll t;
    sd(t);
    while(t--)
    {
        ll a,b;
        sd(a);

        sd(b);
        ans=1;
        ll x=(__gcd(a,b)),y;
        y=x;
        if(x==1)
        {
            printf("1\n");
            continue;
        }
       for(i=0;i<=78500 && check[i]<x &&x ;i++)
       {
            int coun=0;
            while(x%check[i]==0)
            {
                coun++;
                x/=check[i];
            }
            ans*=coun+1;
       }
       if(x>1)
       {
            ans*=2;
       }
       p(ans);
    }
    return 0;
}
