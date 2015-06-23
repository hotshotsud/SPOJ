#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;
int main()
{
    long long int n,j,i,scnt,rcnt=0;
    scanf("%lld",&n);






    for(i=1;i<=n;i++)
    {
        for(j=i+1;i*j<=n;j++)
        {

                  rcnt++;
        }
    }

    printf("%lld",int(sqrt(n))+rcnt);
    return 0;
}
