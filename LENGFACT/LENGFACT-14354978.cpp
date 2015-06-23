#include<bits/stdc++.h>
using namespace std;
int main()
{
 
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%lld", &n);
		if(n==0||n==1||n==2)
		{
			printf("1\n");
		}
		else
		{
			long long value = (log(2*M_PI*n)/2 + n*(log(n)-1))/log(10);
			long long solution = floor(value) + 1;
			printf("%lld\n", solution);
		}
	}
	return 0;
}