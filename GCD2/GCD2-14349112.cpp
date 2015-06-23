#include<iostream>
#include<algorithm>
using namespace std;
string str;
long long rem(long long x)
{
  long long i,p=0;
  for(i=0;i<str.size()-1;i++)
  {
    p=(p*10+str[i]-'0')%x;
  }
  p=(p*10+(str[str.size()-1]-'0'))%x;
  return p%x;
}
int main()
{
  ios::sync_with_stdio(false);
  long long t;
  cin>>t;
  while(t--)
  {
    long long a,p;
    cin>>a>>str;
    if(a==0)
    {
      cout<<str<<"\n";
      goto hell;
    }
    p=rem(a);
    if(p==0)
    {
      cout<<a<<"\n";
      goto hell;
    }
    cout<<(__gcd(a,p))<<"\n";
    hell:;
  }
  return 0;
}
