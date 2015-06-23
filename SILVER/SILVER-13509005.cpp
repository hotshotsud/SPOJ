#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
    int n,c=0;
    while(cin>>n)
    {
        c=0;
        if(n==0)
        {
            return 0;
        }
        else cout<<(int)(log(n)/log(2))<<endl;
    }
    return 0;
}
