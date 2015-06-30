#include <iostream>
#include <cstdio>
#include <vector>
#include <limits.h>

using namespace std;

#define ll long long
ll i,j,startx,starty, desx, desy;
ll gr[27][27], dis[27][27], topx, topy;
void search()
{
	for(i=0;i<27;i++)
	{
		for(j=0;j<27;j++)
		{
			dis[i][j]=0;
		}
	}
	queue <ll> sx,sy;
	sx.push(startx);
	sy.push(starty);
	while(sx.empty()==false && sy.empty()==false)
	{
		topx=sx.front();
		topy=sy.front();
		sx.pop();
		sy.pop();
		i=topx;
		j=topy;
		
	}
}
int main()
{
	int length, breadth;
	cin >> length >> breadth;
	while(length!=0 && breadth!=0 )
	{
		int bb=breadth;
		for(i=0;i<27;i++)
		{
			for(j=0;j<27;j++)
			{
				gr[i][j]=INT_MAX;
			}
		}
		long long ii=1,jj=1;
		while(bb--)
		{
			string str;
			cin>>str;
			for(i=0;i<str.size();i++)
			{
				if(str[i]=='X')
				{
					gr[ii+1][jj+1]=INT_MAX;
				}
				else if(str[i]=='S')
				{
					gr[ii+1][jj+1]=0;
					startx=ii+1;
					starty=jj+1;
				}
				else if(str[i]=='D')
				{
					gr[ii+1][jj+1]=0;
					desx=ii+1;
					desy=jj+1;
				}
				else
				{
					gr[ii+1][jj+1]=str[i]-'0';
				}	
				jj++;			
			}
			ii++;
		}
		search(startx, starty, desx, desy);

		cin>>length>>breadth;
	}
	return 0;
}