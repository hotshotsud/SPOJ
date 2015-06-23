#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		long long int a[n],sum=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int j=n-1;
		for(i=n-1;i>=0;i=i-2)
		{
			sum+=i*(a[j]-a[n-1-j]);
			j--;
		}
		cout<<sum<<endl;
	}
}