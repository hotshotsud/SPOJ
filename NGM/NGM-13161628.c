#include<stdio.h>
int main()
{
	long long int n;
	while(scanf("%lld",&n)==1);
	{	
		if(n%10!=0)	
		{
			printf("1\n%lld",n%10);
		}
		else
		{
			printf("2");
		}
	}
	return 0;
}