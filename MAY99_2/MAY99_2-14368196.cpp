#include<bits/stdc++.h>
using namespace std;
long long fpow(long long base, long long power)
{
  long long res=1;
  while(power>0)
  {
    if(power%2==1)
    {
      res*=base;
    }
    base*=base;
    power/=2;
  }
  return res;
}
long long intlog(long double base,long double x)
{
    return (long long)(log(x) / log(base));
}
int main()
{
  long long t;
  cin>>t;
  while(t--)
  {
    long double n;
    cin>>n;
    long double i;
    i=ceil(intlog(5, (4*n+5.0)/5.0));
    long long j,m,s;
    s=i;
    m=n;
    if((fpow(5,s+1)-5)/4==n)
    {
    	j=(fpow(5,s+1)-5)/4;
    	j-=(fpow(5,s)-5)/4;
    	m-=(fpow(5,s)-5)/4;
    }
    else
    {
    	 j=(fpow(5,s+2)-5)/4;
    	 j-=(fpow(5,s+1)-5)/4;
    	 m-=(fpow(5,s+1)-5)/4;
    }
    while(j>1)
    {
      if(m<=j/5)
      {
        cout<<"m";
      }
      else if(m<=(2*j)/5)
      {
        cout<<"a";
        m-=(j/5);
      }
      else if(m<=(3*j)/5)
      {
        cout<<"n";
        m-=(2*j)/5;
      }
      else if(m<=(4*j)/5)
      {
        cout<<"k";
        m-=(3*j)/5;
      }
      else
      {
        cout<<"u";
        m-=(4*j)/5;
      }
      j/=5;
    }
    cout<<"\n";
  }
  return 0;
}
