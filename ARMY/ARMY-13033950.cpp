#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int ng,nm;
        cin>>ng>>nm;
        int sg[ng],sm[nm];
        for(int i=0;i<ng;i++)
        {
            cin>>sg[i];
        }
        for(int i=0;i<nm;i++)
        {
            cin>>sm[i];
        }
        sort(sg,sg+ng);
        sort(sm,sm+nm);

                if(sm[nm-1]>sg[ng-1])
                {
                    cout<<"MechaGodzilla"<<endl;

                }
                else
                {
                    cout<<"Godzilla"<<endl;

                }

    }
    return 0;
}
