#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	while(1)
	{
		int a,d;
		cin>>a>>d;
		if(a==0 && d==0)
		{
			return 0;
		}
		int x[a],y[d],i;
		for(i=0;i<a;i++)
		{
			cin>>x[i];
		}
		for(i=0;i<d;i++)
		{
			cin>>y[i];
		}
		sort(x,x+a);
		sort(y,y+d);
		if(x[0]<y[1])
		{
			cout<<"Y"<<endl;
		}
		else
		{
			cout<<"N"<<endl;
		}

	}
	return 0;
}