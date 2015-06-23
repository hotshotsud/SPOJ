#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
    unsigned long long int n,temp,sum=0;
	int c=0,rem;
	cin>>n;
	temp=n;
    while(1)
    {
       c++;
       while(temp>0)
       {
        rem=temp%10;
        temp=temp/10;
        sum+=rem*rem;
       }
       if(sum==1)
       {
       	cout<<c<<endl;
       	return 0;
       }
       else if(c==10)
       {
       	cout<<"-1"<<endl;
       	return 0;
       }
       else 
       {
       	temp=sum;
       	sum=0;
       }
    } 
    return 0;   
}