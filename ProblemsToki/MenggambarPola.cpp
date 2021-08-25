// #include <iostream>
// #include <string>
// #include <vector>
// #include <set>
// #include <map>
// #define mod 1000000007
// typedef long long int ll;
// typedef long double ld;
// using namespace std;
// void create_pattern(ll x, ll y){
//     string baris1 = ""; string baris2 = "";
//     for (int i = 0; i < x; i++){
//         if (!(i % 2)){
//             baris1 += "*";
//             baris2 += "$";
//         }else {
//             baris1 += "$";
//             baris2 += "#";
//         }
//     }
//     for (int i = 0; i < y; i++){
//         if (i % 2 == 0){
//            cout << baris1 << endl;
//         }else {
//            cout << baris2 << endl;
//         }
//     }    
// }
// int main(int argc, char const *argv[])
// {
//     ios::sync_with_stdio(0); 
//     cin.tie(0); 
//     cout.tie(0);
//     int n, m;
//     cin >> n >> m;
//     create_pattern(m, n);
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <vector>
// #include <set>
// #include <map>
// #define all(x) (x).begin(),(x).end()
// #define pb push_back
// typedef long long int ll;   typedef long double ld; using namespace std;    const ll mod = 1e9+7 ;  const ll inf = 9e18;

// ll n, m;

// int main(){
//     ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     // freopen("game.in", "r", stdin);
//     // freopen("game.out", "w", stdout);
//     cin >> n >> m;
//     for(ll i = 1; i <= n; i++){
//         for(ll j = 1; j <= m; j++){
//             if(!(i%2) and !(j%2)) cout << "#";
//             else if(i%2 and j%2) cout << "*";
//             else cout << "$";
//         }
//         cout << endl;
//     }
//     return 0;
// }


#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#define mod 1000000007
#define size 1000000001
typedef long long int ll;
typedef long double ld;
using namespace std;
ll arr[size];
void func (ll n){
    if (n == 0)
        arr[n] = 11 % mod;
    if (n == 1)
        arr[n] = 15 % mod;
    if (n >= 2 and n < 11)
        arr[n] = (arr[n-1] % mod + arr[n-2] % mod) % mod; 
    else if (n >= 11 and n < 15)
        arr[n] = (arr[n-11] % mod + arr[n-2] % mod) % mod;  
    else
        arr[n] = (arr[n-11] % mod + arr[n-15] % mod) % mod;
}
void create_pattern(ll x, ll y){
    ll baris1 = 0; ll baris2 = 0;
    for (int i = 0; i < x; i++){
        if (!(i % 2)){
            baris1 += arr[i];
            baris2 += arr[i];
        }else {
            baris1 += arr[i];
            baris2 += arr[i];
        }
    }
    for (int i = 0; i < y; i++){
        if ((i % 2)){
           cout << baris1 << endl;
        }else {
           cout << baris2 << endl;
        }
    }    
}
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    ll s = 0, t = 0;
    int n, m;
    cin >> n >> m;
    for (ll i = 1; i <= m; i++){
        if ((i % 2)) s += (i >> 1), t += (i >> 1);
        else s += (i << 1), t += (i << 1);
    }
    for (ll i = 1; i <= n; i++)
        cout << (i % 2 ? s : t) << endl;
    return 0;
}