#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
	long long int t,f=1;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n,i,root,c=2;
		scanf("%lld",&n);
		root=sqrt(n);
		if(root*root==n)
		{
			printf(" Case %lld: Yes\n",f);
		}
		else
		{
			printf(" Case %lld: No\n",f);
		}
		f++;
	}
	return 0;
}