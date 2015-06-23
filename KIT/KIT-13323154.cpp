#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	
	
		long long int n;
		scanf("%lld",&n);
		long long int npad[n],i,j,a,k;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&npad[i]);
		}
		
		i=0;
		string str;
		while(cin>>str && str!="-1")
		{
			for(j=0;j < str.size();j++)
			{
					a=str.at(j);
					k=a;
					a=a+npad[i];	
					i++;
					while(a>122)
					{
						a=a-122;
					}
					if(a<97)
					{
						a=a+96;
					}
					char ch;
					ch=(char)a;
					printf("%c",ch);
			}
			printf("\n");
		}
		
	
	return 0;
}	
