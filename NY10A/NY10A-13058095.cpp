#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0;
        cin>>i;
         string str;
         cin>>str;
         for(int n=0;n<38;n++)
         {
             if('T'==str.at(n) && 'T'==str.at(n+1) && 'T'==str.at(n+2))
             {
                 a1++;
             }
             if('T'==str.at(n) && 'T'==str.at(n+1) && 'H'==str.at(n+2))
             {
                 a2++;
             }
             if('T'==str.at(n) && 'H'==str.at(n+1) && 'T'==str.at(n+2))
             {
                 a3++;
             }
             if('T'==str.at(n) && 'H'==str.at(n+1) && 'H'==str.at(n+2))
             {
                 a4++;
             }
             if('H'==str.at(n) && 'T'==str.at(n+1) && 'T'==str.at(n+2))
             {
                 a5++;
             }
             if('H'==str.at(n) && 'T'==str.at(n+1) && 'H'==str.at(n+2))
             {
                 a6++;
             }
             if('H'==str.at(n) && 'H'==str.at(n+1) && 'T'==str.at(n+2))
             {
                 a7++;
             }
             if('H'==str.at(n) && 'H'==str.at(n+1) && 'H'==str.at(n+2))
             {
                 a8++;
             }
         }
         cout<<i<<" "<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" "<<a5<<" "<<a6<<" "<<a7<<" "<<a8<<endl;

    }
    return 0;
}
