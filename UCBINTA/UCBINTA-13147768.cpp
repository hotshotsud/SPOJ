#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    long long int n;
    cin>>n;
    long long int e[n][n],sum_of_row[n],a[n],Variable=0,i,j;
    long long int sum=0;
    for(i=0;i<n;i++)
    {
        sum_of_row[i]=0;
        for(j=0;j<n;j++)
        {
            cin>>e[i][j];
            sum_of_row[i]+=e[i][j];
        }
        sum+=sum_of_row[i];
    }
    if(n==2)
    {
         cout<<sum/4<<" "<<sum/4<<endl;
    }
    else{
            Variable=sum/(2*(n-1));
            for(i=0;i<n;i++)
            {
                a[i]=(sum_of_row[i]-Variable)/(n-2);
                cout<<a[i]<<" ";
            }
            cout<<endl;

            }
    return 0;

}
