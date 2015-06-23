#include<bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
	
	while(1)
    {
    	string str;
    	getline(cin,str);
		if(str.at(0)=='*')
		{
			return 0;
		}
		char ch=str.at(0);
		int s=str.size(),c=ch,d;
		if(c>=65 && c<=90)
		{
         	d=c+32;
		}
		else
		{
			d=c-32;
		}
		int n=0,y=0,i;
		for(i=0;i+1<s;i++)	
		{
			if(str.at(i)==' ')
			{
				n++;
				char w=str.at(i+1);
				int q=w;
				if(q==d || q==c)
				{
					y++;
				}
			}
		}
		if(y==n)
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
