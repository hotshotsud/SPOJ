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
int main()
{
  long long t;
  cin>>t;
  while(t--)
  {
    long double n;
    cin>>n;
    long double i;
    i=ceil(log2((n+2.0)/2.0));
    long j,k,l,m,o,p,q,r,s;
    s=i;
    j=fpow(2,s+1)-2;
    m=n;
    j-=fpow(2,s)-2;
    m-=fpow(2,s)-2;
    while(j>1)
    {
      if(m>j/2)
      {
        cout<<6;
        m-=j/2;
      }
      else
      {
        cout<<5;
      }
      j/=2;
    }
    cout<<"\n";
  }
  return 0;
}
