#include<iostream>
#include<set>
#include<map>
using namespace std;
int main()
{
	 int n;
	cin>>n;
	 int i;
	set < int> s;
	map <int, bool> ss;
	int a,b,c;
	for(i=0;i<n;i++)
	{
		cin>>a;
		ss[a]=true;
		cin>>b;
		while(b--)
		{
			cin>>c;
			if(ss[c]!=1) s.insert(c);
		}	
	}
	int ans=0;
	/*for(i=0;i<s.size();i++)
	{
		if(ss[]==false)
		{
			ans++;
		}
	}*/
	
	for(set<int>::const_iterator it = s.begin(); it != s.end(); it++) 
	{ 
       if(ss[*it]==false)
       {
		   ans++;
	   } 
	} 
	cout<<ans<<endl;
	return 0;
}
