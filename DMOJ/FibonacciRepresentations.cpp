#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#define mod 10000000007
typedef long long int ll;
typedef long double ld;
using namespace std;
ll arr[1000000001];
void fib(ll n){
    if (n < 1) 
        return;
    if (n == 1) 
        arr[n] = 1 % mod;
    if (n == 2)
        arr[n] = 2 % mod;
    else {
        arr[n] = (arr[n-1] % mod) + (arr[n-2] % mod);
    }
}
int main(int argc, char const *argv[])
{
    for(int i = 1 ; i <= 1000000001 ;i++ ) 
        fib(i);
    ll n;
    cin >> n;
    ll f;
    for (ll i = 0; i < n; i++){
        cin >> f;
        printf("%lli\n", arr[f]);
    }
    return 0;
}
