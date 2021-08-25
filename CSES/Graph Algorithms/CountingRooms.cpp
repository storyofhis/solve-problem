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
char ar[1001][1001];
bool vis[1001][1001];
bool isValid(ll x, ll y){
    if (x < 1 || x > n || y < 1 || y > m) return false;
    if (vis[x][y] == true || ar[x][y] == '#') return false;
    return true;
}
void dfs(ll x, ll y){
    vis[x][y] = true;
    if (isValid(x-1, y)){
        dfs(x-1, y);
    }
    if (isValid(x, y+1)){
        dfs(x, y+1);
    }
    if (isValid(x+1,y)){
        dfs(x+1, y);
    }
    if (isValid(x, y-1)){
        dfs(x, y-1);
    }
}
int main(int argc, char const *argv[])
{
    cin >> n >> m;
    ll i, j;
    rep (i, 1, n){
        rep (j, 1, m){
            cin >> ar[i][j];
        }
    }
    ll count = 0;
    rep(i, 1, n){
        rep(j, 1,m){
            if (ar[i][j] == '.' and vis[i][j] == false){
                dfs(i, j);
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
