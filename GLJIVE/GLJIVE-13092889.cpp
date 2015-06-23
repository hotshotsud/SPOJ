#include<bits/stdc++.h>
using namespace std;
int main()
{
        ios::sync_with_stdio(false);
        int a[10],i,sum=0;
        for(i=0;i<10;i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(sum>=100 && sum-a[i]<100)
             {

                   if(sum>=100 && 100-(sum-a[i])>=sum-100)
                    {
                      cout<<sum<<endl;
                    }
                   else
                    {
                      cout<<sum-a[i]<<endl;
                    }
                    return 0;
             }


        }
         cout<<sum<<endl;

        return 0;

}
