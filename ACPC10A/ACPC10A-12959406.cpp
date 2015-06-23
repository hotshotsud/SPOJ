#include<iostream>
using namespace std;
long long int a1[10001],a2[10001],a3[10001],w[10001];
string str[10001];
int main()
{
   long long int i=0,j;
    while(1)
    {
        cin>>a1[i]>>a2[i]>>a3[i];
        if(a1[i]==0 && a2[i]==0 && a3[i]==0)
        {
            break;
        }
        i++;
    }
    for(j=0;j<i;j++)
    {
        if(2*a2[j]==(a1[j]+a3[j]))
        {
            str[j]="AP";
            w[j]=(a3[j]+(a3[j]-a2[j]));
        }
        else
        {
            str[j]="GP";
            w[j]=((a3[j])*(a3[j]/a2[j]));
        }
        cout<<str[j]<<" "<<w[j]<<endl;
    }
    return 0;

}
