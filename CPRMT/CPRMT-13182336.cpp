#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	while(cin>>a)
	{
		
		cin>>b;
		int i,j,x=a.size(),y=b.size();
		
		char d[1001];
		int f[1001];
		int r=0;
        for(i=0;i<x;i++)
        {
        	for(j=0;j<y;j++)
        	{
        		if(a.at(i)==b.at(j) && a.at(i)!='Q' && b.at(j)!='Q')
        		{
        			d[r]=a.at(i);
        			f[r]=d[r];
        			a.at(i)='Q';
        			b.at(j)='Q';
        			
        			
        			r++;
        		}
        	}
        }
        sort(f,f+r);
        for(i=0;i<r;i++)
        {
        	d[i]=f[i];
        	cout<<d[i];
        }
        cout<<endl;

	}
	return 0;
}