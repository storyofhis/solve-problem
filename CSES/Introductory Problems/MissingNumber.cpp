#include <iostream>
#include <algorithm>
#include <set>
typedef long long int ll;
using namespace std;

int main(int argc, char const *argv[])
{
    long long int n;
    cin >> n;
    set <ll> s;
    long long int arr[n];
    for (ll i = 1; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }
    ll i = 1;
    for (auto x : s){
        if (i != x){
            cout << i;
            return 0;
        }
        i++;
    }
    cout << n;
}
