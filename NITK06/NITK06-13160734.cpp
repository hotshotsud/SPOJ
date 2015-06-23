#include<bits/stdc++.h>
using namespace std;
long long int a[10001],j;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c=0;
		cin>>n;

		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}

		if(n==2)
		{
			if(a[0]==a[1])
			{
				cout<<"YES"<<endl;
				goto suk;
			}
			else
			{
				cout<<"NO"<<endl;
				goto suk;
			}
		}
		for(j=0;j+1<n;j++)
		{
			c++;
			if(a[j]>a[j+1])
			{
				cout<<"NO"<<endl;
				goto suk;
			}
            else
            {
                a[j+1]=a[j+1]-a[j];
            }
		}
		if(a[n-1]==0)
		{
			cout<<"YES"<<endl;
		}
		else if(a[n-1]!=0)
		{
			cout<<"NO"<<endl;
		}
		suk:{}
	}
	return 0;
}
