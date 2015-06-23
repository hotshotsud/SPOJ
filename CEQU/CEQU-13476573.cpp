#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
    long long int t,j=0;
    cin>>t;
    while(t--)
    {
        j++;
        long long a,b,c ;
        cin>>a>>b>>c;

            if( c % ( __gcd ( abs(a) , abs(b) ) )==  0  )
            {
                printf("Case %lld: Yes\n",j);

            }

    else
    {
            printf("Case %lld: No\n",j);
    }

    }
    return 0;
}
