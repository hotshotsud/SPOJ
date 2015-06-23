#include <bits/stdc++.h>
#define sd(x) scanf("%lld",&x)
using namespace std;
int main()
{
    long long int t;
    sd(t);
    long long int a[t];
    for(int i=0;i<t;i++)
    {
        sd(a[i]);
    }
    sort(a,a+t);
    for(int i=0;i<t;i++)
    {
        printf("%lld\n",a[i]);
    }
    return 0;
}
