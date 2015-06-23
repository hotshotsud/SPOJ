#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,c,j,l=0,a;
    cin>>n;
    bool k=false;
    l=0;
    for(i=2;i<=n;i++)
    {
        k=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                k=1;
                goto s;
            }
        }
        s:;
        if(!k)
        {
            l++;
            if(l>1)
            {
                printf(" * ");
            }
            a=n/i;
            c=0;
            while(a>0)
            {
                c+=a;
                a/=i;
            }
            printf("%lld^%lld",i,c);
        }
    }
    return 0;
}
