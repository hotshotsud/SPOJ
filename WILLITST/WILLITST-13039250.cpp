#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    unsigned long long int n;
    cin>>n;
     long double i=log2(n);
     long long int j=i;
     if(i-j==0)
     {
         cout<<"TAK";
     }
     else
     {
         cout<<"NIE";
     }
    return 0;
}
