#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	while(1)
	{
		int n;
		cin>>n;
		if(n==0)
		{
			return 0;
		}
		int a[n],i;
        for(i=0;i<n;i++)
        {
        	cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i+1<n;i++)
        {
        	int d=abs(a[i]-a[i+1]);
        	if(d>200)
        	{
        		cout<<"IMPOSSIBLE"<<endl;
                goto suk;
        	}
        }
        if(1422-a[n-1]>100)
        {
        	cout<<"IMPOSSIBLE"<<endl;
        	goto suk;
        }
        cout<<"POSSIBLE"<<endl;
        suk:{}
	}
	return 0;
}