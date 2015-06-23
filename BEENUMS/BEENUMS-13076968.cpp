#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        long long int B,Q;
        cin>>B;
        if(B==-1){break;}
        long double W;
        W=((sqrt(12*B-3))/6)-0.5;
        Q=W;
        if(W-Q==0)
        {
            cout<<"Y"<<endl;
        }
        else
        {
            cout<<"N"<<endl;
        }
    }
    return 0;
}
