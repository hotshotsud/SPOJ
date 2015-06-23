#include<cstdio>

int main(){
    long long int t,c;
    long double i;
    scanf("%lld",&t);
    for(long long int a=1;a<=t;a++)
    {
        scanf("%lld",&c);
        i=((double)c)*((double)c)*4+0.25;
        printf("Case %lld: %.2Lf\n",a,i);
    }
}
