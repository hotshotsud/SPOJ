#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int H,P,A;
		long long int ans=0;
		double x,y,z;
		scanf("%lld%lld%lld",&H,&P,&A);
		if(H<=P)
        {
            printf("1\n");
            continue;
        }
		x=(P-2*A);
		y=sqrt((P*P)+(4*A*A)-(12*A*P)+(8*P*H));
		z=2*P;
		ans=ceil((((-1)*x)+y)/z);
		ans=ans+ans-1;
		printf("%lld\n",ans);
	}
	return 0;
}
