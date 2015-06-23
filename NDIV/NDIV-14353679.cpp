    #include<iostream>
    #include<cmath>
    #include<stdio.h>
    using namespace std;
    #define MAX 31627
    #define sq 178
    int check[32000];
    int prime[10000];
    #define ll long long
    ll temp;
    void s()
    {
        ll i,j;
        for(i=3;i<=sq;i++)
        {
            if(!check[i])
            {
                for(j=i*i;j<MAX+1;j+=i)
                {
                    check[j]=1;
                }
            }
     
        }
        prime[0]=2;
        j=1;
        for(i=3;i<=MAX;i+=2)
        {
            if(!check[i])
            {
                prime[j]=i;
                j++;
            }
        }
    }
    int main()
    {
        s();
        ll a,b,n,i,j,k,r=0,ans,coun=0;
        scanf("%lld%lld%lld",&a,&b,&n);
        for(i=a;i<=b;i++)
        {
            temp=i;
            k=0;
            coun=0;
            ans=1;
            for(j=prime[k];j*j<=temp;j=prime[k++])
            {
                coun=0;
                while(temp%j==0)
                {
                    temp/=j;
                    coun++;
                }
                ans*=coun+1;
            }
            if(temp!=1)
            {
                ans*=2;
            }
            if(ans==n)
            {
                r++;
            }
        }
        printf("%lld\n",r);
        return 0;
    }