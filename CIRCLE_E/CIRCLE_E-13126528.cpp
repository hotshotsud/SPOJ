#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		long double R1,R2,R3,ans;
		cin>>R1>>R2>>R3;
        ans=1/((1/R1)+(1/R2)+(1/R3)+2*sqrt((1/(R1*R2))+(1/(R2*R3))+(1/(R3*R1))));
        printf("%.6Lf\n",ans);
	}
	return 0;
}