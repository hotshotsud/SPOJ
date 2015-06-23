#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,j,i;
    cin>>t;
   long long int men[t][1001],women[t][1001],N[t],sum[t];
    for(i=0;i<t;i++)
    {
        cin>>N[i];
        int h=N[i];
        for(j=0;j<h;j++)
        {
            cin>>men[i][j];
        }
        for(j=0;j<h;j++)
        {
            cin>>women[i][j];
        }
        sort(men[i],men[i]+h);
        sort(women[i],women[i]+h);
    }
    for(i=0;i<t;i++)
    {
        sum[i]=0;
        int y=N[i];
        for(j=0;j<y;j++)
        {
           sum[i]+=men[i][j]*women[i][j];
        }
        cout<<sum[i]<<endl;
    }
    return 0;
}
