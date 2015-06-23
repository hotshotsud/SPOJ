#include<iostream>
using namespace std;
int column[10001],sizeh[10001];
string str[10001];
int main()
{
    int i=0,j,k,z;
    while(1)
    {
        cin>>column[i];
        if(column[i]==0)
        {
            break;
        }
        cin>>str[i];
        i++;
    }
    for(j=0;j<=i;j++)
    {
        sizeh[j]=str[j].size();
        for(k=0;k<column[j];k++)
        {
            for(z=k;z<sizeh[j];)
            {
                cout<<str[j].at(z);
                z=z+(2*(column[j]-k))-1;
                if(z<sizeh[j])
                {
                    cout<<str[j].at(z);
                    z=z+(2*k)+1;
                }

            }

        }
        cout<<endl;
    }
    return 0;
}
