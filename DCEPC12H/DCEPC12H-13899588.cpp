#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long double n,k;
        cin>>n>>k;
        
        long double ans;

        ans=(n+1.0)/2;

        printf("%.7Lf\n",ans);
    }
    return 0;
}
