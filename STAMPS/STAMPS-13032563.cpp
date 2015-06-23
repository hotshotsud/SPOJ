#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,i=0;
    cin>>t;
    while(t--)
    {
        i++;
        long int extra,frnds,c=0,sum=0;
        cin>>extra>>frnds;
        int q[frnds];
        for(int j=0;j<frnds;j++)
        {
            cin>>q[j];
        }
        sort(q,q+frnds);
        for(int j=frnds-1;sum<extra;j--)
        {
            sum+=q[j];
            c++;
        }

           if(c<=frnds)
           {
               cout<<"Scenario #"<<i<<":"<<endl;
               cout<<c<<endl;
           }
           else
           {
               cout<<"Scenario #"<<i<<":"<<endl;
            cout<<"impossible"<<endl;
           }
    }
    return 0;
}
