#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <cmath>
using namespace std;
typedef long  long int ll;
typedef long double ld;
void solve(){
    ll n, k;
    cin >> n >> k;
    cout << n - (k + 1) / 2 << endl;
    for (int i = k + 1; i <= n; i++) cout << i << " ";
    for (int i = (k + 1) / 2; i < k; i++) cout << i << " ";
    cout << endl;
}
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}
