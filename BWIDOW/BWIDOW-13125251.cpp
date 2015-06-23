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
		long long int r[n],R[n];
		cin>>r[0]>>R[0];
		long long int maxr=r[0],index=1;
		for(i=1;i<n;i++)
		{
			cin>>r[i]>>R[i];
			if(r[i]>maxr)
			{
				maxr=r[i];
				index=i+1;
			}
		}
		sort(R,R+n);
		if(R[n-2]<maxr)
		{
			cout<<index<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}