#include<iostream>
using namespace std;
long long int n[100];
int main()
{
    int i,f=0;
    for(i=0;i<100;i++)
    {
        f++;
        cin>>n[i];

        if(n[i]==0)
        {
            goto suk;
        }
    }
    suk:


for(i=0;i<f;i++)
{
    n[i]=((n[i]*(n[i]+1)*(2*n[i]+1))/6);
}



    for(i=0;i<(f-1);i++)
    {

        cout<<n[i]<<endl;
    }
    return 0;
}
