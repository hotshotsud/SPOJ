#include<iostream>
using namespace std;

long long int fastPower(long long base,long long power,long long MOD)
{
        long long result=1;
        while (power>0)
        {
                if (power%2==1)
                      {
                        result = (result*base)%MOD;
                      }
                base = (base*base)%MOD;
                power/=2;
        }
        return result;
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,p,a=1,i,aa=-1,temp;
        cin>>n>>p;
        if(n>=p)
        {
            cout<<0<<endl;
        }
        else
        {

            for(i=n+1;i<p;i++)
            {
                temp=fastPower(i,p-2,p);
                aa=(aa*temp)%p;
            }
            cout<<aa+p<<endl;

        }

    }
    return 0;
}
