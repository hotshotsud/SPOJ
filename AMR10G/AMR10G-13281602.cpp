#include<iostream>
#include<stdio.h>
#include<algorithm>
#define sd(x) scanf("%lld",&x);
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,k;
		sd(n);
		sd(k);
		long long int a[n],i;
		for(i=0;i<n;i++)
		{
			sd(a[i]);
		}
		sort(a,a+n);
		long long int md;
		md=abs(a[k-1]-a[0]);
		for(i=1;i+k-1<n;i++)
		{
			md=min(abs(a[i+k-1]-a[i]),md);
		}
		printf("%lld\n",md);
	}
	return 0;
}
