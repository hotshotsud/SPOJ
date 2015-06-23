#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    while(1)
    {
        int g,b;
        cin>>g>>b;
        if(g==-1 && b==-1){break;}
        int G=max(b,g),B=min(b,g);
        cout<<ceil(G/(B+1))+ceil(G%(B+1)>0)<<endl;
    }
    return 0;
}
