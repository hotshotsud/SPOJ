#include<iostream>
#include<map>
#include<cmath>

using namespace std;
#define MAX 31700

long long int prime[MAX+1];
long long int i,j;


int main()
{
    ios::sync_with_stdio(false);
    for(i=2;i<sqrt(MAX+1);i++)
    {
        if(!prime[i])
        {
            for(j=2;i*j<MAX+1;j++)
            {
                prime[i*j]=1;
            }
        }

    }
    int t;
    cin>>t;
    while(t--)
    {

        long long int s,e;
        cin>>s>>e;
        if(s==1){
            s=2;
        }
        j=2;
        long long int w=s;
        map<long long int ,bool> nepr;
        for(j=2;j<=31700;j++)
        {
            if(prime[j]==0 )
            {
                for(i=w/j;i*j<=e;i++)
                {
                nepr[i*j]=1;
                }
            }
        }
        for(i=s;i<=e;i++)
        {
            if(i<=31700)
            {
                if(!prime[i] && i!=1000000007 && i!=1)
                {
                    cout<<i<<endl;
                }
            }
            else
            {
                if(!nepr[i]&& i!=1000000007 && i!=1)
                {
                    cout<<i<<endl;
                }
            }
        }


    }
    return 0;
}

