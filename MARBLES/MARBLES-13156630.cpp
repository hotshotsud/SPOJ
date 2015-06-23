#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,r=1,i;
		cin>>n>>k;
		if(k==0||k>n)cout<<0<<endl;
		else
		{
			n--;
			k--;
			if (k>n-k)
            k=n-k;
            for (i=0;i<k;i++)
           {
              r*=(n-i);
              r/=(i+1);
           }
           cout<<r<<endl;
		}

	}
	return 0;
}
