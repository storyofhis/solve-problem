#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
typedef long long int ll;
using namespace std;
void solve(){
    ll n;
    cin >> n;
    vector<ll> row(n), col(n), max_col(n);
    for (int i = 0; i < n; i++){
        int max_row = 0;
        for (int j = 0; j < n; j++){
            ll h;
            cin >> h;
            if (h > max_row){
                ++row[i];
                max_row = h;
            }
            if (h > max_col[j]){
                ++col[j];
                max_col[j] = h;
            }
        }
    }
    for (int i = 0; i < n; i++){
        // printf("%lld%c", col[i], " \n" [i == n - 1]);
        cout << col[i] << " ";
    }
    for (int i = 0; i < n; i++){
        cout << row[i] << endl;
    }
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
