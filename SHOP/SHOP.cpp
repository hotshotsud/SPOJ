#include <iostream>
#include <limits.h>
#include <cstdio>
#include <vector>
using namespace std;
int main()
{
	long long length, breadth;
	cin>>length>>breadth;
	while(length!=0 && breadth!=0)
	{
		long long i,j,bb=breadth;
		long long gr[27][27];
		for(i=0;i<27;i++)
		{
			for(j=0;j<27;j++)
			{
				gr[i][j]=0;
			}
		}
		long long grac[28][28];
		for(i=0;i<28;i++)
		{
			for(j=0;j<28;j++)
			{
				grac[i][j]=INT_MAX;
			}
		}
		long long stax, stay, desx, desy;
		for(i=0;i<bb;i++)
		{
			string str;
			cin>>str;
			for(j=0;j<str.size();j++)
			{
				if(str[j]=='X')
				{
					gr[i][j]=INT_MAX;
				}
				else if(str[j]=='D' || str[j]=='S')
				{
					gr[i][j]=0;
					if(str[j]=='D')
					{
						desx=i;
						desy=j;
					}
					if(str[j]=='S')
					{
						stax=i;
						stay=j;
					}
				}
				else
				{
					gr[i+1][j+1]=str[j]-'0';
				}
			}
		}




		cin>>length>>breadth;
	}
	return 0;
}