#include <iostream>
#include <vector>
#include <limits.h>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;

#define ll long long int
#define sd(x) scanf("%lld",&x)
#define p(e) printf("\n");

ll i,u,v,node,top,rm,ri;
vector<ll> gr[10002];
ll dis[10002];
void bfs(ll start)
{
	bool visited[node+1];
	memset(visited,false,sizeof(visited));
	memset(dis,0,sizeof(dis));
	queue <ll> s;
	s.push(start);
	visited[start]=true;
	while(s.empty()==false)
	{
		top=s.front();
		s.pop();
		for(i=0;i<gr[top].size();i++)
		{
			if(visited[gr[top][i]]==false)
			{
				dis[gr[top][i]]=dis[top]+1;
				visited[gr[top][i]]=true;
				s.push(gr[top][i]);
			}
			
		}
	}
	rm=0;

	for(i=1;i<node+1;i++)
	{
		rm=max(rm,dis[i]);
		if(rm==dis[i]) ri=i;
	}
}
int main()
{
	sd(node);
	ll t=node-1;
	while(t--)
	{
		sd(u);
		sd(v);
		gr[u].push_back(v);
		gr[v].push_back(u);
	}
	bfs(1);
	bfs(ri);
	printf("%lld\n",rm);
	return 0;
}
