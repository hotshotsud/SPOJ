#include<iostream>
using namespace std;
int dp[2001][2001]; 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		int al=a.size(),bl=b.size(),i,j,x;
		
		for(i=0;i<=al;i++)
		{
			dp[i][0]=i;
		}
		for(i=1;i<=bl;i++)
		{
			dp[0][i]=i;
		}
		for(i=1;i<=al;i++)
		{
			for(j=1;j<=bl;j++)
			{
				x=min( dp[i-1][j]+1,  dp[i][j-1]+1);
				dp[i][j]=min( dp[i-1][j-1]+ ( a[i-1]!=b[j-1] )  ,  x );
			}
		}
		cout<<dp[al][bl]<<"\n";
	}
	return 0;
}