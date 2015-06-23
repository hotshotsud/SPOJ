#include<iostream>
#include<algorithm>
#include<cmath>
#include<stdio.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,num=0,den,f,g,j,l,x,y,ans;

        cin>>n;
        if(n%2!=0)
        {
            g=n/2;
            g++;
        }


        den=n*n*n*6;
        f=(n/2);
        f=(f*(f+1))/2;
        num+=n*n;
        num+=2*f;
        if(n%2!=0)
        {
            num+=g;
        }
        if(n>=3)
        {
            if(n%2!=0)
            {
                x=n;
                y=x/2;
                ans=0;
                ans+=y;
                y--;
                ans+=(y*(y+1));
                num+=ans;
            }
            else
            {
                x=n;
                x=x/2;
                x--;
                ans=0;
                ans+=x*(x+1);
                num+=ans;
            }
        }

        l=(__gcd(num,den));
        num=num/l;
        den=den/l;
        printf("%lld/%lld\n",num,den);
    }
    return 0;
}
