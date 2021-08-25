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
ll sv, ev;
vector < vector <ll> > graph;
vector <ll> parent;
vector <bool> visited;
bool dfs (ll u, ll p){
    visited[u] = true;
    parent[u] = p;
    for (auto v: graph[u]){
        if (v == p) continue;
        if (visited[v]){
            sv = v;
            ev = u;
            return true;
        }
        if (!visited[v])
            if (dfs(v,u)) return true;
    }
    return false;
}
bool visit_all(){
    for (ll i = 1; i <= n; ++i) if (!visited[i])
        if (dfs(i, -1)) return true;
    return false;
}
void addEdge(ll u, ll v){
    graph[u].pb(v);
    graph[v].pb(u);
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin >> n >> m;
    graph.resize(n + 1);
    parent.resize(n + 1);
    visited.resize(n + 1);
    for (ll i = 1; i <= m; i++){
        ll a, b;
        cin >> a >> b;
        addEdge(a,b);
    }
    if (!visit_all()) {
        cout << "IMPOSSIBLE" << endl; 
        return 0;
    }
    ll tv = ev;
    vector < ll > ans;
    ans.pb(ev);
    while (tv != sv){
        ans.pb(parent[tv]);
        tv = parent[tv];
    }
    ans.pb(ev);
    cout << ans.size() << endl;
    for (auto c : ans) cout << c << " ";
    return 0;
}
