#include<iostream>
using namespace std;
int main()
{
     int i,a[1000];


     for(i=0;i<1000;i++)
     {
          cin>>a[i];
          cout<<endl;
     }
     for(i=0;i<1000;i++)
     {    if(a[i]==42)
          {
              goto suk;
          }
          cout<<endl<<a[i];
     }
     suk:
     return 0;
}
