#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  while(cin>>str)
  {
    if(str=="0")
    {
      return 0;
    }
    long long dp[6001],i,j,temp,len;
    for(i=0;i<6001;i++)
    {
      dp[i]=0;
    }
    len=str.size();
    dp[0]=1;
    dp[1]=1;
    for(i=2;i<=len;i++)
    {


        temp=str[i-1]-'0';
        temp+=(str[i-2]-'0')*10;

        if(temp>9 && temp<=26)  dp[i]+=dp[i-2];

      if(str[i-1]-'0'>0)
      {
        dp[i]+=dp[i-1];
      }
    }
    cout<<dp[len]<<"\n";
  }
  return 0;
}
