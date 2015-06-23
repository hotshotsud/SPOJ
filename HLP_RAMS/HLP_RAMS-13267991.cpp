#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        s:{}
        long long n,te;
        scanf("%lld",&n);
        te=n;
        if(n==0) {
            printf("0 1\n");
            if(t!=0){
            t--;
            goto s;}
            else
            {
                return 0;
            }

        }
        long long c=0;
        while(n!=1)
        {
            if(n%2!=0)
            {
                c++;
            }
            n=n/2;
        }
        c++;
        long long a=pow(2,c);
        printf("%lld %lld\n",te+1-a,a);

    }
    return 0;
}
