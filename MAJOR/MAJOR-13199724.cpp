#include<bits/stdc++.h>
using namespace std;
long long int a[1000001];
int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	long long int i,j,temp,lol;
	long long int c[2001];
	while(t--)
	{
			long long int n;
			cin>>n;
			
			for(j=0;j<2001;j++)
			{
				c[j]=0;
			}            
			for(i=0;i<n;i++)
			{
				cin>>a[i];
				temp=a[i];
				if(temp<0)
				{
					lol=2001+temp;
               		c[lol]=c[lol]+1;
               		
				}
				else
				{
					c[temp]=c[temp]+1;
					
				}
			}
			for(j=0;j<1001;j++)
			{
				if(c[j]>n/2)
				{
					cout<<"YES "<<j<<endl;
					goto suk;
				}
			}
			for(j=1001;j<2001;j++)
			{
				if(c[j]>n/2)
				{
					cout<<"YES "<<j-2001<<endl;
					goto suk;
				}
			}
			cout<<"NO"<<endl;	
			suk:{}
			
			
	}
	return 0;
}