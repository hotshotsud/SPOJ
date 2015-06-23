#include<iostream>
#include<stdio.h>
#include<climits>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int in,i,a,ans=INT_MIN;
        scanf("%d",&a);
        a=((a-1)*(a))/2;
        bool test[251];
        for(i=0;i<251;i++)
        {
            test[i]=false;
        }
        int w[a],d[a],c[251],cd[251];
        for(i=0;i<a;i++)
        {
            scanf("%d%d",&w[i],&d[i]);
            c[w[i]]=1;
            cd[w[i]]=1;
            test[w[i]]=true;
        }
        for(i=0;i<a;i++)
        {
            if(test[d[i]]){
                c[w[i]]+=cd[d[i]];
            }
            if(ans==c[w[i]])
            {
                goto r;
            }
            ans=max(ans,c[w[i]]);
            if(ans==c[w[i]]){
                in=w[i];
            }
            r:;
        }
        printf("%d %d\n",in,ans);
    }
    return 0;
}
