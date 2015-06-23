#include<iostream>
using namespace std;
int main()
{
    float a[10001],temp[10001],n;
    int i=0;
    while(1)
    {
        cin>>a[i];
        temp[i]=a[i];

        if(a[i]==0.00)
        {
            break;
        }
        i++;
    }
    for(int h=0;h<i;h++)
    {
          for(n=1;n<=273;n++)
          {
             temp[h]=temp[h]-1/(n+1);
             if(temp[h]<=0)
               {

                       cout<<n<<" card(s)"<<endl;
                       break;


               }
          }
    }
    return 0;
}
