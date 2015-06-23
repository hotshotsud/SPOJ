#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n;
    long double a,b,c,ga,gb,gc,S,R,HG,s;
    cin>>n;
    cout<<fixed;
    for(int i=0;i<n;i++){
        cout<<setprecision(11);
        cin>>a>>ga>>gb>>gc;

        b=a*ga/gb;
        c=a*ga/gc;
        s=(a+b+c)/2;
        S=sqrt(s*(s-a)*(s-b)*(s-c));
        R=a*b*c/4/S;

        HG=2*(sqrt(9*R*R-a*a-b*b-c*c))/3;

        cout<<setprecision(3);
        cout<<S<<" "<<HG<<endl;
    }
    return 0;
}
