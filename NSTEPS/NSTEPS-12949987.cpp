#include<iostream>
using namespace std;
long long int s1[10001],s2[10001],n;
int main()
{
    long long int test,i;
    cin>>test;
    int x[test],y[test];
    s1[0]=0;
    s1[1]=1;
    s2[0]=2;
    s2[1]=3;
    n=1;
    for(i=2;i<10001;i++)
    {
        n++;
        if(n%2!=0)
        {
            s1[i]=s1[i-1]+1;
            s2[i]=s2[i-1]+1;
        }
        else if(n%2==0)
        {
            s1[i]=s1[i-1]+3;
            s2[i]=s2[i-1]+3;
        }



    }
int w,z;

    for(i=0;i<test;i++)
    {
        cin>>x[i]>>y[i];

    }
    for(i=0;i<test;i++)
    {
        if(x[i]==y[i])
        {
            w=x[i];
            cout<<s1[w]<<endl;
        }


        else if(x[i]-y[i]==2 && x[i]>=2)
        {   z=y[i];
            cout<<s2[z]<<endl;
        }
        else{cout<<"No Number"<<endl;}
    }
    return 0;





}
