#include<bits/stdc++.h>
#define sd(x) scanf("%lld",&x)
using namespace std;
int main()
{
    long long int t;
    sd(t);
    while(t--)
    {
        long long int a,b,ans=0,p=0;
        char ch;

        while(1)
        {
            p++;
            if(p==1)
            {
                sd(a);
                  cin>>ch;
                  sd(b);

                  if(ch=='/')
                  {
                     ans=a/b;
                   }
                  else if(ch=='*')
                 {
                    ans=a*b;
                  }
                  else if(ch=='+')
                 {
                    ans=a+b;
                   }
                 else if(ch=='-')
                 {
                    ans=a-b;
                  }
                 else if(ch=='=')
                 {
                      goto suk;
                 }


         }
               else
               {
                           a=ans;
                              cin>>ch;

                            if(ch=='/')
                            {
                                sd(b);
                               ans=a/b;
                             }
                           else if(ch=='*')
                            {
                                sd(b);
                                ans=a*b;
                            }
                           else if(ch=='+')
                           {
                               sd(b);
                                ans=a+b;
                            }
                            else if(ch=='-')
                           {
                               sd(b);
                                ans=a-b;
                            }
                           else if(ch=='=')
                            {
                                 goto suk;
                             }
            }

        }
        suk:
            printf("%lld\n",ans);
    }
    return 0;
}
