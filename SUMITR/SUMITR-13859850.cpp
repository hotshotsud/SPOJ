#include<iostream>
using namespace std;int main(){int t;cin>>t;while(t--){int n;cin>>n;int m=0,a[101][101],i,j;for(i=1;i<=n;i++){for(j=1;j<i+1;j++){cin>>a[i][j];(a[i][j]=max(a[i-1][j-1],a[i-1][j])+a[i][j])>m?m=a[i][j]:m;}}cout<<m<<"\n";}}

