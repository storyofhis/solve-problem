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
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        if (n % 2){
            for (int i = 1; i <= n-3; i++)
                cout << i + 1 << " " << i << endl;
            cout << n << " " << n-2 << " " << n-1 << endl;
        }else {
            for(ll i=1;i<=n;i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
