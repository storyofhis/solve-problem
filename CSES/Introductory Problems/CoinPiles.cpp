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
typedef long long int ll;
typedef long double ld;
using namespace std;
bool func (ll a, ll b){
    return (2 * a - b >= 0 and (2 * a - b) % 3 == 0 and 2 * b - a >= 0 and (2 * b - a) % 3 == 0);
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t = 1;
    while (t--){
        ll n;
        cin >> n;
        for (ll i = 0; i < n; i++){
            ll a, b;
            cin >> a >> b;
            if (func(a, b)){
                cout << "YES" << endl;
            }else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
