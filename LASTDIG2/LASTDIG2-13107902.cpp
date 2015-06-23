#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int p[10][4]={{0,0,0,0},{1,1,1,1},{2,4,8,6},{3,9,7,1},{4,6,4,6},{5,5,5,5},{6,6,6,6},{7,9,3,1},{8,6,8,6},{9,1,9,1}},t;

    cin>>t;
    while(t--)
    {
        unsigned long long int b;
        string a;
        cin>>a>>b;
        if(b==0)
        {
            cout<<1<<endl;
        }
        else
        {
            int f=a.size(),last=a.at(f-1)-'0',k=b%4;
            if(k==0)
            {
                k=3;
            }
            else
            {
                k=k-1;
            }
            cout<<p[last][k]<<endl;
        }

    }
    return 0;
}
