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
using namespace std;
int factorial (int n){
    if (n <= 1){
        return 1;
    }else {
        return n*factorial(n-1);
    }
}
int main(int argc, char const *argv[])
{
    ll t = 1;
    while (t--){
        ll n;
        cin >> n;
        ll ans = 0;
        for (ll i = 5; n/i >= 1; i *= 5){
            ans += (n/i);
        }
        cout << ans << endl;
    }
    return 0;
}
