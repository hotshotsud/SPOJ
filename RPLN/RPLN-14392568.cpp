#include<iostream>
#include<limits.h>
#include<stdio.h>
using namespace std;
long long st[1400002];
long long a[1000002];
#define ll long long
#define sd(x) scanf("%lld",&x)
ll n;
void build(long long a[], long long v, long long s, long long e)
{
	if(s==e)
	{
		st[v]=a[s];
		return;
	}
	long long m=(s+e)/2;
	build(a, 2*v+1, s, m);
	build(a, 2*v+2, m+1, e);
	st[v]=min(st[2*v+1],st[2*v+2]);
}
ll query(ll a[], ll v, ll qs, ll qe, ll s, ll e)
{
	if(e < qs || s > qe )
	{
		return INT_MAX;
	}
	if(qs <= s && qe >= e)
	{
		return st[v];
	}
	ll m=(s+e)/2;
	return min( query(a,2*v+1,qs,qe,s,m) , query(a,2*v+2,qs,qe,m+1,e) );
}
int main()
{
	//ios::sync_with_stdio(false);
	long long t,l=1;
	sd(t);
	while (t--)
	{
		printf("Scenario #%lld:\n",l);
		l++;
		long long  q;
		sd(n);
		sd(q);
		long long i;
		for(i=0;i<n;i++)
		{
			sd(a[i]);
		}
		build(a, 0, 0, n-1);
		//cout << st[0] << " <this one \n";
		while(q--)
		{
			ll x,y;
			sd(x);
			sd(y);
			//cin >> x >> y;
			printf("%lld\n",query(a,0,x-1,y-1,0,n-1));
			//cout << query(a,0,x-1,y-1,0,n-1) << "\n"; 
		}
		//free(st);
	}
	return 0;
}