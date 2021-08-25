#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long  long int ll;
typedef long double ld;
typedef vector <ll> vl;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, r, b, d;
    cin >> t;
    for (ll i = 1; i <= t; i++){
        cin >> r >> b >> d;
        ll differ = abs(r - b);
        ll mn = r < b ? r : b;
        ll each = (differ + mn - 1) / mn;
        if (each <= d) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
