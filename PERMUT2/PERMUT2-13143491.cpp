#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	while(1)
	{
		long long int n;
		cin>>n;
		if(n==0)
		{
			break;
		}
		long long int a[n],i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			if(a[a[i]-1]!=i+1)
			{
			   break;	
			}
			
		}
		 if(i<n){
              cout<<"not ambiguous"<<endl;}
              else{
              cout<<"ambiguous"<<endl;
              }
		suk:{}
	}
	return 0;
}