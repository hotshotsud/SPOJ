#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=(n+1)/2;
        }



        printf("%lld\n",n);
	}
	return 0;
}
