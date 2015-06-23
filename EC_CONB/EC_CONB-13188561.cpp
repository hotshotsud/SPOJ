#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	long long int t;
	cin>>t;
    while(t--)
    {
    	long long int a,i;
    	cin>>a;
    	if(a%2!=0)
    	{
    		cout<<a<<endl;
    		
    	}
    	else
    	{
		    vector<int> b(0);
		    while(a>0)
		    {
		    	b.push_back(a%2);
		    	a=a/2;
		    }
	        long long int temp=(b.at(0))*2;
		    for(i=1;i<b.size();i++)
		   	{
		   		temp=(temp*2)+(b.at(i));
		    }
		    cout<<temp<<endl;
		}
    	
    }
    return 0;
}