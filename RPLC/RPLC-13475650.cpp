#include<iostream>
#include<vector>
#include<stdio.h>
#include<climits>
using namespace std;
int main()
{

    long long int t,j=0;
    cin>>t;
    while(t--)
    {
        j++;
        long long int n,i;
        cin>>n;
        long long int a[n];
        long long int s=0,temp=INT_MAX;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
            temp=min(s,temp);
        }
        if(temp<0)
        {
            printf("Scenario #%lld: %lld\n",j,(-1*temp)+1);

        }
        else if(temp==0)
        {
            printf("Scenario #%lld: %lld\n",j,temp+1);
        }
        else if(temp>0)
        {
            printf("Scenario #%lld: 1\n",j);
        }
        else
        {
            cout<<endl;
        }
    }
    return 0;
}
