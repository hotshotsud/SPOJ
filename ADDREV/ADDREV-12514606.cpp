#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int act[n][2],b[n][2],dig[n][2],rev[n][2],rev1[n][2],sum[n],sum_dig[n],sumtemp[n],sum_rev[n],sum_rev1[n];
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cin>>act[i][0];
        cout<<"\t";
        cin>>act[i][1];
        cout<<endl;
    }





    for(i=0;i<n;i++)
    {
        b[i][0]=act[i][0];
        b[i][1]=act[i][1];
        dig[i][0]=0;
        dig[i][1]=0;
        while(b[i][0]>0)
        {
            b[i][0]=b[i][0]/10;
            dig[i][0]++;
        }
        while(b[i][1]>0)
        {
            b[i][1]=b[i][1]/10;
            dig[i][1]++;
        }
    }


    for(i=0;i<n;i++)
    {
        rev[i][0]=0;
        rev[i][1]=0;
        rev1[i][0]=0;
        rev1[i][1]=0;
        while(act[i][0]>0)
        {
            rev[i][0]=act[i][0]%10;
            rev[i][0]=rev[i][0]*pow(10,dig[i][0]-1)+rev1[i][0];
            rev1[i][0]=rev[i][0];
            act[i][0]=act[i][0]/10;
            dig[i][0]--;
        }
         while(act[i][1]>0)
        {
            rev[i][1]=act[i][1]%10;
            rev[i][1]=rev[i][1]*pow(10,dig[i][1]-1)+rev1[i][1];
            rev1[i][1]=rev[i][1];
            act[i][1]=act[i][1]/10;
            dig[i][1]--;
        }
    }



    for(i=0;i<n;i++)
    {
        sum[i]=rev[i][0]+rev[i][1];

    }

     for(i=0;i<n;i++)
     {
         sum_dig[i]=0;
         sumtemp[i]=sum[i];
         while(sumtemp[i]>0)
         {
             sumtemp[i]=sumtemp[i]/10;
             sum_dig[i]++;
         }
     }




                      for(i=0;i<n;i++)
                      {
                          sum_rev1[i]=0;
                          while(sum[i]>0)
                          {
                              sum_rev[i]=sum[i]%10;
                              sum_rev[i]=sum_rev[i]*pow(10,sum_dig[i]-1)+sum_rev1[i];
                              sum_rev1[i]=sum_rev[i];
                              sum[i]=sum[i]/10;
                              sum_dig[i]--;
                          }
                      }




    for(i=0;i<n;i++)
    {
        cout<<endl<<sum_rev[i];
    }
    return 0;
}

