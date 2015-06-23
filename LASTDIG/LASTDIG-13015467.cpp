#include<iostream>
#include<cmath>
using namespace std;
long long int a[31][2],h[31][4],temp,l[31][5];
int main()
{
    int t,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
        for(j=0;j<5;j++)
        {
           long long int killer=pow(a[i][0],j);
           killer=killer%10;
            l[i][j]=killer;
        }
    }
    for(i=0;i<t;i++)
    {
        temp=a[i][1]%4;
        if(a[i][1]%4==0 && a[i][1]!=0){
        cout<<l[i][4]<<endl;}
        else{ cout<<l[i][temp]<<endl;
        }
    }
    return 0;

}
