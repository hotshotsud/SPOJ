#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int t;
   double x,x1=0,f,df,A,B,C;




    cin>>t;
    while(t--)
    {
        cin>>A>>B>>C;
        x=C/A;

          x=floor(x*1000000+.5)/1000000;
             int six=6;
        while(six-- && x!=x1)
        {

            f=A*x+B*sin(x)-C;
            df=A+B*cos(x);
            x1=x-(f/df);
             x=(floor(x1*1000000+.5))/1000000;
              if(x==x1){goto suk;}
        }
     suk:

       printf("%.6f\n",x1);

    }
    return 0;
}
