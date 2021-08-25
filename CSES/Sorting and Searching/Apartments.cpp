#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <array>
#include <cmath>
#include <list>
#define pi 3.14159265
#define pb push_back
#define mod 1000000007
#define mp make_pair
#define ff first
#define ss second
#define rep(i,a,b) for(ll i=a;i<b;i++)
typedef std::vector<long long> vl;
typedef std::pair<long long, long long> pl;
typedef long long int ll;
using namespace std;


int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    while (t--){
        ll n, m, k;
        cin >> n >> m >> k;
        set <ll> s;
        ll Nnum, Mnum;
        for (ll i = 0; i < n; i++){
            cin >> Nnum;
            s.insert(Nnum);
        }
        for (ll i = 0; i < n; i++){
            cin >> Mnum;
            s.insert(Mnum);
        }
    }
    return 0;
}
