#include<iostream>
using namespace std;
long long n,k,p,i;
long long f[100001];
long long inf[100001];
long long fpow(long long base, long long power)
{
	long long w=1;
	while(power>0)
	{
		if(power%2==1)
		{
			w=(w*base)%p;
		}
		base=(base*base)%p;
		power/=2;
	}
	return w;
}
long long nCr(long long x,long long y)
{
	if(y>x)
	{
		return 0;
	}
	if(x==y || y==0)
	{
		return 1;
	}
	long long z;
	z=(f[x]*inf[x-y])%p;
	z*=inf[y];
	z%=p;
	return z;
}
void pre()
{
	f[0]=1;
	for(i=1;i<p;i++)
	{
		f[i]=(i*f[i-1])%p;
	}
	inf[p-1]=fpow(f[p-1],p-2)%p;
	for(i=p-2;i>=0;i--)
	{
		inf[i]=((i+1)*inf[i+1])%p;
	}
}
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>p;
		long long tempo;
		tempo=n+1;
		k=n-k;
		n=tempo;
		//n++;k++;
		long long ans=1;
		pre();
		while(n>0 && k>0)
		{
			ans*=nCr(n%p,k%p);
			ans%=p;
			n/=p;
			k/=p;
		}
		cout<<ans<<endl;
	}
	return 0;
}