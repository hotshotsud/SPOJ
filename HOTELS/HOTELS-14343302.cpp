#include<iostream>
#include<cstdio>
#include<limits.h>
using namespace std;
int main(){
	long n,m;
	scanf("%ld%ld",&n,&m);
	long a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%ld", &a[i]);
	}
	long cur=0,j=0,sum=0;
	for(i=0;i<n;i++)
	{
		if(cur+a[i]<m)
		{
			cur+=a[i];
		}
		else if(cur+a[i]==m)
		{
			cout<<m;
			return 0;
		}
		else
		{
			while(cur+a[i]>m)
			{
				cur-=a[j];
				j++;
			}
			if(cur+a[i]<m)
			{
				cur+=a[i];
			}
			else if(cur+a[i]==m)
			{
				printf("%ld",m);
				return 0;
			}
		}
		sum=max(sum,cur);
	}
	printf("%ld",sum);
	return 0;
}
