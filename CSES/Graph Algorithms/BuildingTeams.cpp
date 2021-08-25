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
vector < vector <ll> > g; // graph
vector <ll> color;
vector <ll> vis;
bool dfs (ll u, ll c, ll par){
    vis[u] = true;
    color[u] = c;
    for (auto v: g[u]){
        if (v == par) continue;
        if (color[v] == 0)
            if (!dfs(v, (color[u]^3), u))
                return false;
        if (color [v] == color[u])
            return false;
    }
    return true;
}
// undirected Graph
void addEdge (ll u, ll v){
    g[u].pb(v);
    g[v].pb(u);
}
bool color_all()
{
    for (ll i = 1; i <= n; ++i)
        if (!vis[i])
            if (!dfs(i, 1, -1))
                return false;
    return true;
}
int main(int argc, char const *argv[])
{  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    g.resize(n + 1);
    color.resize(n + 1);
    vis.resize(n + 1);

    for (ll i = 0; i < m; ++i){
        ll u, v;
        cin >> u >> v;
        addEdge(u,v);
    }
    if (!color_all()){
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    for (int i = 1; i <= n; ++i)
        cout << color[i] << " ";
    return 0;
}
