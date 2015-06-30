#include <iostream>
using namespace std;
int main()
{
	string a;
	while(cin>>a)
	{

		int i,j,c=0;
		bool check=false,check1=false;
		for(i=0;i<a.size();i++)
		{
			if(a[0]=='_' || a[a.size()-1]=='_')
			{
				cout<<"Error!\n";
				goto hell;
			}
			if((int)a[0]>64 && (int)a[0]<91)
			{
				cout<<"Error!\n";
				goto hell;	
			}
			if(check && (int)a[i]>64 && (int)a[i]<91)
			{
				cout<<"Error!\n";
				goto hell;
			}
			if(check==false && (int)a[i]>64 && (int)a[i]<91)
			{
				string str2="_";
				a.insert(i,str2);
				i++;
				int x=(int)a[i];
				x+=32;
				char y=(char)x;
				a[i]=y;
				check1=true;
				goto hel;
			}
			if(a[i]=='_' && !check1)
			{
				if(a[i+1]=='_')
				{
					cout<<"Error!\n";
					goto hell;
				}

				a.erase(i,1);
				int x=(int)a[i];
				if(x>64 && x<91)
				{
					cout<<"Error!\n";
					goto hell;	
				}
				x-=32;
				//cout << x<<endl;
				char y=(char)x;
				a[i]=y;
				check=true;
				goto hel;
			}
			if(a[i]=='_' && check1)
			{
				cout<<"Error!\n";
				goto hell;
			}
			hel:;
		}
		cout<<a<<endl;
		hell:;
	}
	return 0;
}