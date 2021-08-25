#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
typedef long long int ll;
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
        ll arr[n+3], ans = 0;
        for (ll i = 0; i < n; i++){
            cin >> arr[i];
        }
        for (ll i = 0; i < n-1; i++){
            ans = max(ans, arr[i] * arr[i+1]);
        }
        cout << ans << endl;
    }

    return 0;
}
