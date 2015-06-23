#include<iostream>
using namespace std;
long long int a[10000001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
		long long int n,k;
		cin>>n>>k;
		long long int c=0,i,temp;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			temp=a[i];
			if(!(temp%k))
			{
				c++;
			}
		}
		cout<<c<<endl;
		return 0;
}