#include<iostream>
#include<string>
using namespace std;
long long dp[25];
int main()
{
  string str;
  cin>>str;
  long long i,len=str.size(),temp=0;
  for(i=0;i<25;i++)
  {
    dp[i]=0;
  }
  dp[0]=1;
  dp[1]=1;
  for(i=2;i<=len;i++)
  {
    temp=str[i-1]-'0';
    temp+=(str[i-2]-'0')*10;
    if(temp>9 && temp<=20)
    {
      dp[i]+=dp[i-2];
    }
    dp[i]+=dp[i-1];
  }
  cout<<dp[len]<<"\n";
  return 0;
}
