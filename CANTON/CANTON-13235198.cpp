#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,sum,row;
        scanf("%lld",&n);
        row=ceil((sqrt(1+8*n)-1)/2);
        sum=row+1;


        long long int we=n-((row-1)*(row)/2);
        if(row%2==0)
        {
            printf("TERM %lld IS %lld/%lld\n",n,we,sum-we);
        }
        else
        {
            printf("TERM %lld IS %lld/%lld\n",n,sum-we,we);
        }
    }
    return 0;
}
