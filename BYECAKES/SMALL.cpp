#include <iostream>
#include <algorithm>
using namespace std;
#define MOD 1000000007
#define ll long long
#define MAX 10001
ll i,j,f[MAX+1];
void pre()
{
	f[1]=1;
	for(i=2;i<MAX+1;i++)
	{

		f[i]=f[i-1]*(i/(__gcd(f[i-1],i)))%MOD;
		if(f[i]<0) f[i]+=MOD;
		f[i]%=MOD;
		//cout<<f[i]<<"\n";
	}
}
int main()
{
	pre();
	//cout<<f[1]<<" "<<f[2]<<" "<<f[3]<< " "<<endl;
	ll t;
	cin>>t;
	while(t--)
	{
		ll x;
		cin>>x;
		cout<<f[x]<<endl;
	}
	return 0;
}