#include<iostream>
using namespace std;
int N[10001],sum[10001],j,k,i,P[10001][10001],ans[10001];
int main()
{

    for(i=0;i<10001;i++)
    {
        sum[i]=0;

    }
    i=0;
        while(1)
        {
            cin>>N[i];


            if(N[i]==-1)
            {
                break;
            }

            for(j=0;j<N[i];j++)
            {
               cin>>P[i][j];

               sum[i]+=P[i][j];
            }

            ans[i]=0;


            if(sum[i]%N[i]==0){
                    sum[i]=sum[i]/N[i];
                     for(j=0;j<N[i];j++)
                    {
                            if(sum[i]>P[i][j]){
                             ans[i]=ans[i]+sum[i]-P[i][j];}
                            else{
                             ans[i]=ans[i]; }

                            }}
            else{ans[i]=-1;}



            i++;
        }
        for(k=0;k<i;k++)
        {
          cout<<ans[k]<<endl;
        }
        return 0;
}
