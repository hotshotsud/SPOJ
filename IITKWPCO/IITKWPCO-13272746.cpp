#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,i;
        scanf("%lld",&n);
        long long int a[n],j,c=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                if(a[i]*2==a[j] && a[i]!=0 && a[j]!=0)
                {
                    c++;
                    a[i]=0;
                    a[j]=0;
                }
            }
        }
        printf("%lld\n",c);
    }
    return 0;
}
