#include <iostream>
#include <string>
#include <vector>
#include <set>
typedef long long int ll;
typedef long double ld;
using namespace std;
#define size 10
ll k;
void solve(){
    ll arr [size] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000}, sum = 0;
    for (int i = size - 1; i >= 0; i--){
        int count = 0;
        bool status = true;
        while (sum <= k and status){
            sum += arr[i];
            if (sum > k){
                sum -= arr[i];
                status = false;
            }else {
                count++;
            }
        }
        if (count > 0) cout << arr[i] << " " << count << endl;
    }
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> k;
    solve();
    return 0;
}
