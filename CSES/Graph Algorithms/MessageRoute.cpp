#include <bits/stdc++.h>
#define pi 3.14159265
#define INF 0x3f3f3f3f
#define pb push_back
#define mod 1000000007
#define mp make_pair
#define ff first
#define ss second
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define pq priority_queue
typedef long long int ll;
typedef std::vector<ll> vl;
typedef std::vector<vl> vvl;
typedef std::vector<bool> vb;
typedef std::pair<ll, ll> pl;
typedef std::list<ll> l;
typedef std::map <ll, ll> ml;
typedef std::list<ll>::iterator it;
typedef std::list< pl > lpl;
typedef std::stack<ll> st;
typedef std::set<pl> spl;
typedef l *adj;
#define fr(it,a,b) for (it = adj[].begin(); it != adj[].end(); ++it)
using namespace std;
 
int n, m;
vector<vector<int> > g;
vector<int> par;
vector<bool> vis;
 
void bfs()
{
	vis[1] = true;
	queue<int> q;
	q.push(1);
	while(!q.empty())
	{
		int u = q.front();
		q.pop();
		for(auto v: g[u])
		{
			if(!vis[v])
			{
				vis[v] = true;
				par[v] = u;
				q.push(v);
			}
		}
	} 
}
 
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	g.resize(n+1);
	vis.resize(n+1);
	par.resize(n+1);
	for(int i = 0; i<=n; ++i)
	{
		par[i] = -1;
	}
	for(int i = 0; i < m; ++i)
	{
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	bfs();
 
	if(par[n] == -1)
	{
		cout <<  "IMPOSSIBLE";
		return 0;
	}
 
 
	int candidate = n;
	stack<int> stk;
	while(candidate != -1)
	{
		stk.push(candidate);
		candidate = par[candidate];
	}
 
	cout << stk.size() << endl;
 
	while(!stk.empty())
	{
		cout << stk.top() << " ";
		stk.pop();
	}
 
 }
