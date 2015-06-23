#include<iostream>
#include<cmath>
#include<map>
using namespace std;
long long p[1000001],s[1000001];
int main()
{
	ios::sync_with_stdio(false);
	long long i,j;
	for(i=2;i<=1000000;i+=2)
	{
		p[i]=1;
		p[i-1]=1;
	}
	p[0]=0;
	p[1]=0;
	for(i=2	;i<(1000000);i++)
	{
		for(j=2;j*i<=1000000;j++)
		{
			p[i*j]+=i;
		}
	}
	s[2]=1;
	for(i=3;i<=1000000;i++)
	{
		s[i]=s[i-1]+p[i];
	}
	long long int t;
	cin>>t;
	while(t--)
	{
		long long x;
		cin>>x;
		if(x==1)
		{
			cout<<0<<endl;
			goto he;
		}
		cout<<s[x]<<endl;
		he:;
	}
	return 0;
}
