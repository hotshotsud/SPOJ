#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int n,rem,temp,i,n1;
        cin>>n;
        if(n==1)
        {
            cout<<0<<endl;
            goto suk;
        }
        else{
					
                    for(i=n/2;i>=1;i--)
                    {

                        temp=i;
                        n1=n;
                         do
                         {
                                 
                               rem=n1%temp;
                               if(rem==0 && temp==1)
                                {

                                   cout<<i<<endl;
                                   goto suk;

                                }
                                 n1=temp;
                                 temp=rem;
                         }while(rem);
                    }
        }

       suk:{}
    }
    return 0;
}
