#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int n;
		cin>>n;
		cout<<((n*(3*n+1))/2)%1000007<<endl;
	}
	return 0;
}