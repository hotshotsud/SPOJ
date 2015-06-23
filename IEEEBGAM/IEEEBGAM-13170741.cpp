#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		double n;
		scanf("%lf",&n);
		double ans;
        ans=n/(n+1);
        printf("%.8lf\n",ans);
	}
	return 0;
}