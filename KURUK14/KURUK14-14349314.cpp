#include<iostream>
#include<map>
using namespace std;
int main()
{
  long long t;
  cin>>t;
  while(t--)
  {
    long long n,i;
    cin>>n;
    long long a[n];
    map<long long, long long> c;
    for(i=0;i<n;i++)
    {
      cin>>a[i];
      c[a[i]]++;
    }
    for(i=0;i<n;i++)
    {
      if(c[i]>0 || c[n-1-i]>0 )
      {
        if(c[i]>0)
        {
          c[i]--;
        }
        else if(c[n-1-i]>0)
        {
          c[n-1-i]--;
        }
      }
      else
      {
        cout<<"NO\n";
        goto hell;
      }
    }
    cout<<"YES\n";
    hell:;
  }
  return 0;
}
