#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int N,K,M,i=0,p;
		cin>>N>>K>>M;
		if(K<=M/N)
		{
			i++;
			p=K*N;
			while(K<=M/p)
			{
				i++;
				p*=K;
			}
		}
		cout<<i<<endl;
	}
	return 0;
}