#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
    long long int t,j=0;
    cin>>t;
    while(t--)
    {
        j++;
        long long int x1,y1,x2,y2,n,m,g,z=0;
        cin>>x1>>y1>>x2>>y2;
        if(x1+y1==0)
        {
           printf("Case %lld: %lld\n",j,z);
           goto d;
        }
        n=((x2+1)*x1)+((y2+1)*y1);
        m=(x1+y1)*(x2+y2+1);
        g=(__gcd(n,m));
        printf("Case %lld: %lld/%lld\n",j,n/g,m/g);
        d:;
    }
    return 0;
}
