#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int u=1,uu=0,E, F , S, M , E1,F1,S1,M1;
	while(1)
	{
		cin>>E>>F>>S>>M;
		int mcakes=0,cakes, ccakes;
		if(E==0 && F==0 && S==0 && M==0)
		{
			cout<<"0 0 0 0\n";
			goto hell;
		}
		cin>>E1>>F1>>S1>>M1;
		if(E==-1)
		{
			return 0;
		}
		if(E>=E1)
		{
			if(E1!=0 && E%E1==0)
			{
				ccakes=E/E1;
				mcakes=max(mcakes, ccakes);
			}
			else
			{
				if(E1!=0) ccakes=E/E1;
				else ccakes=-1; 
				ccakes++;
				mcakes=max(mcakes, ccakes);
			}
		}
		else if(E<E1)
		{
			mcakes=max(mcakes, u);
		}
		if(F>=F1)
		{
			if(F1!=0 && F%F1==0)
			{
				ccakes=F/F1;
				mcakes=max(mcakes, ccakes);
			}
			else
			{
				if(F!=0)ccakes=F/F1;
				else ccakes=-1; 
				ccakes++;
				mcakes=max(mcakes, ccakes);
			}
		}
		else if(F<F1)
		{
			mcakes=max(mcakes, u);
		}
		if(S>=S1)
		{
			if(S1!=0 && S%S1==0)
			{
				ccakes=S/S1;
				mcakes=max(mcakes, ccakes);
			}
			else
			{
				if(S1!=0)ccakes=S/S1;
				else ccakes=-1; 
				ccakes++;
				mcakes=max(mcakes, ccakes);
			}
		}
		else if(S<S1)
		{
			mcakes=max(mcakes, u);
		}
		if(M>=M1)
		{
			if(M1!=0 && M%M1==0)
			{
				ccakes=M/M1;
				mcakes=max(mcakes, ccakes);	
			}
			else
			{
				if(M1!=0) ccakes=M/M1;
				else ccakes=-1; 
				ccakes++;
				mcakes=max(mcakes, ccakes);
			}
		}
		else if(M<M1)
		{
			mcakes=max(mcakes, u);
		}
		cout << max((mcakes*(E1))-E,uu)<<" ";
		cout << max((mcakes*(F1))-F,uu)<<" ";
		cout << max((mcakes*(S1))-S,uu)<<" ";
		cout << max((mcakes*(M1))-M,uu)<<"\n";
		hell:;
	}
	return 0;
}