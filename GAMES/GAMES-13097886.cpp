#include<bits/stdc++.h>
using namespace std;
long gcd(long a,long b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        long int coun=0,i,fla=0,num=1;
        for(i=str.size()-1;i>=0;i--)
        {
            if(str[i]=='.')
            {
                fla=1;
                break;
            }
            coun++;
        }
        for(i=0;i<str.size();i++)
        {
            if(str[i]!='.')
            {
                num=num*10+(str[i]-48);
            }
        }
        int frac=1;
        if(fla)
            frac=pow(10,coun);
            cout<<frac/gcd(num,frac)<<endl;


    }
    return 0;
}
