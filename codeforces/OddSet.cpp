#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cassert>
#include <set>
#include <map>
#include <array>
#include <list>
#include <iterator>
#define pb push_back
#define ff first
#define ss second
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long long int ll;
typedef long double ld;
using namespace std;
typedef set<ll> s;
typedef s::iterator is;
typedef vector<ll> v;
typedef v::iterator it;
typedef map <ll, ll> m;
typedef m::iterator im;
typedef pair <ll, ll> p;

// PRIME NUMBER TEST//
bool prime(ll n){
    if (n<2) return false;
    if (n<=3) return true;
    if ((n%2)) return false;
    for (ll i=3; i*i <=n; i += 2)
        if((n%i))return false;
    return true;
}

// Graph Grid //
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

void solve(){
    ll n, q1, q2, ans = 0, odd = 0, even = 0;
    m m;
    m::iterator im;
    cin >> n;
    for (ll i = 0; i < n; i++){
        cin >> q1 >> q2;
        m.insert(p(q1, q2));
    }
    for (im = m.begin(); im != m.end(); im++){
        ans = im->ff + im->ss;
        if (!(ans % 2)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
int main(int argc, const char** argv) {
    fast;
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll odd = 0,even = 0,x;
        for(ll i = 0;i < n * 2; i++)
        {
            cin >> x;
            if((x%2)) even++;
            else odd++;
        }
        if(odd == even) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}