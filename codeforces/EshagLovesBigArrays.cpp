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

void solve(){
    ll n, ans = 0;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    ll i = 0;
    while (i < n and arr[i] == arr[0])
        i++;
    ans = n - i;
    cout << ans << endl;
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


// int main(int argc, char const *argv[])
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     ll t;
//     cin >> t;
//     for (ll j = 0; j < t; j++) {
//         ll n, sum = 0, avg = 0, ans = 0;
//         cin >> n;
//         ll arr[n];
//         for (int i = 0; i < n; i++){
//             cin >> arr[i];
//             sum += arr[i];
//             avg = ceil(sum / n);
//             if (arr[i] < avg){
//                 cout << (ans += arr[i]) << endl;
//             }
//             else if (arr[i] == avg){
//                 cout << 0 << endl;
//             }
//         }
//     }
//     return 0;
// }
