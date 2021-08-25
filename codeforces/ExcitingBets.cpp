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
typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vl;
using namespace std;
void solve (){
    ll a, b;
    cin >> a >> b;
    if (a < b) swap(a,b);
    if (a == b) cout << "0 0" << endl; 
    cout <<  a - b << " "; 
    ll c = a - b;
    cout << min(c - a % c, a % c) << endl;
}
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
