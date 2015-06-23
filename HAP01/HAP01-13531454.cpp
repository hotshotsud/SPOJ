#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int q,n,m,o=0,e=0,k,r=0,i,l;
        cin>>m>>n>>k;
        for(i=m;i<=n;i++)
        {
            q=i;
            l=0;
            e=0;
            o=0;
            while(q)
            {
                l++;
                if(l%2==0)
                {
                    if(q%2!=0)
                    {
                        e++;
                    }
                }
                else
                {
                    if(q%2!=0)
                    {
                        o++;
                    }
                }
                q/=2;
            }
            if(max(o,e)-min(o,e)==k)
            {
                r++;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}
