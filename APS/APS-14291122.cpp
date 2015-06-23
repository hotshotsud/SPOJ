#include<iostream>
using namespace std;
long long p[10000001];
int main()
{
	long long int i,j;
	for(i=4;i<=10000000;i+=2)
	{
		p[i]=2;
		p[i-1]=1;
	}
	p[2]=2;
	for(i=3;i<=10000000;i+=2)
	{
		if(p[i]==1)
		{
			for(j=i*i;j<=10000000;j+=i)
			{
				if(p[j]==1) p[j]=i;
			}
			p[i]=i;
		}
	}
	p[0]=0;
	p[1]=0;
	for(i=3;i<=10000000;i++)
	{
		p[i]+=p[i-1];
	}
	long long int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout<<p[n]<<endl;
	}
	return 0; 
}
	
