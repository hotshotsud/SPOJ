#include<iostream>
using namespace std;
int _max(int a,int b,int c)
{
    if(a>=b && a>=c)
    {
        return a;
    }
    else if(b>=a && b>=c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long r,c;
        cin>>r>>c;
        long long a[r+2][c+2],i,j;
        for(j=0;j<c+2;j++)
        {
            a[0][j]=0;
            a[r+1][j]=0;
        }
        for(i=0;i<r+2;i++)
        {
            a[i][0]=0;
            a[i][c+1]=0;
        }
        for(i=1;i<r+1;i++)
        {
            for(j=1;j<c+1;j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=r;i>0;i--)
        {
            for(j=c;j>0;j--)
            {
                a[i][j]+=_max(a[i+1][j],a[i+1][j-1],a[i+1][j+1]);
            }
        }
        r=a[1][1];
        for(j=1;j<=c;j++)
        {
            r=max(r,a[1][j]);
        }
        cout<<r<<endl;
    }
    return 0;
}
