#include<iostream>
#include<map>
using namespace std;
map <long long int,long long int> mem;
long long int temp;

long long int f(long long int x)
{
    if(mem[x])
    {
        mem[x]=mem[x];
    }
    else if(x<6)
    {
        mem[x]=x;
    }
    else
    {
        mem[x]=f(x/2)+f(x/3)+f(x/4);

    }
   mem[x]=max(mem[x],x);
   return mem[x];

}
int main()
{


    long long int n;

    while(cin>>n)
    {
        cout<<max(n,f(n));
        cout<<endl;
    }
    return 0;

}
