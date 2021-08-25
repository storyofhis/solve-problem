#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <array>
#include <cmath>
#include <list>
#include <string>
#include <queue>
#include <cstdlib>
#include <stack>
#include <utility>
#include <limits.h>
#include <functional>
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

ll n, m;
ll cc = 0;
vvl g;
vb vis;
vl lead;
void dfs (ll u)
{
    vis[u] = true; 
    for (auto v : g[u])
        if (!vis[v])    
            dfs(v);
}
void proccess_cc()
{
    for (auto i = 1; i <= n; ++i){
        if (!vis[i]){
            cc++;
            lead.pb(i);
            dfs(i);
        }
    }
}
int32_t main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    g.resize(n + 1);
    vis.resize(n + 1);
    for (auto i = 0; i < m; ++i){
        int u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    proccess_cc();
    cout << cc - 1 << endl;
    if (cc > 1)
    {
        ll u = lead[0];
        ll v;
        for (auto i = 1; i < cc; ++i){
            v = lead[i];
            cout << u << " " << v << endl;
            u = v;
        }
    }
}