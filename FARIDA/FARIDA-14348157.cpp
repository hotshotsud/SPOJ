#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  long long t,j=0;
  cin>>t;
  while(t--)
  {
    j++;
    long long a[10001],d[10001];
    long long n,i;
    cin>>n;
    if(n==0)
    {
      printf("Case %lld: %d\n", j,0);
      goto hell;
    }

    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    d[0]=a[0];
    if(n>1) d[1]=max(a[1],d[0]);
    for(i=2;i<n;i++)
    {
      d[i]=max(d[i-1],a[i]+d[i-2]);
    }
    printf("Case %lld: %lld\n", j,d[n-1]);
    hell:;
  }
  return 0;
}
