#include<iostream>
#define LL long long int
long long int P[10001][10001];
using namespace std;
int main()
{
     int t;
     cin>>t;
     cout<<endl;
     LL N[t],sum[t],j,i,temp;

     string ans[t];
        for(i=0;i<t;i++)
        {

              cin>>N[i];
              temp=N[i];
              sum[i]=0;
               for(j=0;j<temp;j++)
               {
                    cin>>P[i][j];
                    sum[i]+=P[i][j]%N[i];
               }
               if(sum[i]%temp==0){
                    ans[i]="YES";
                    }
               else{
                    ans[i]="NO";}
                    cout<<endl;
        }
           for(i=0;i<t;i++)
           {
              cout<<ans[i]<<endl;
           }
        return 0;
}
